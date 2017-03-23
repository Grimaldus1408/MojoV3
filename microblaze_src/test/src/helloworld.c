/*
 * Copyright (c) 2009-2012 Xilinx, Inc.  All rights reserved.
 *
 * Xilinx, Inc.
 * XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS" AS A
 * COURTESY TO YOU.  BY PROVIDING THIS DESIGN, CODE, OR INFORMATION AS
 * ONE POSSIBLE   IMPLEMENTATION OF THIS FEATURE, APPLICATION OR
 * STANDARD, XILINX IS MAKING NO REPRESENTATION THAT THIS IMPLEMENTATION
 * IS FREE FROM ANY CLAIMS OF INFRINGEMENT, AND YOU ARE RESPONSIBLE
 * FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE FOR YOUR IMPLEMENTATION.
 * XILINX EXPRESSLY DISCLAIMS ANY WARRANTY WHATSOEVER WITH RESPECT TO
 * THE ADEQUACY OF THE IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO
 * ANY WARRANTIES OR REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE
 * FROM CLAIMS OF INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

/*
 * helloworld.c: simple test application
 *
 * This application configures UART 16550 to baud rate 9600.
 * PS7 UART (Zynq) is not initialized by this application, since
 * bootrom/bsp configures it to baud rate 115200
 *
 * ------------------------------------------------
 * | UART TYPE   BAUD RATE                        |
 * ------------------------------------------------
 *   uartns550   9600
 *   uartlite    Configurable only in HW design
 *   ps7_uart    115200 (configured by bootrom/bsp)
 */

#include <stdio.h>
#include "xparameters.h"
#include "xil_types.h"
#include "xstatus.h"
#include "xil_testmem.h"
#include "xbram.h"
#include "xiomodule.h"

XIOModule gpo;
volatile u32 ct = 0;

void Memory_test_32b(XIOModule ioModule){
	u32 addr;
	u32 result;
	int i;
	for(addr = 0 ; addr < 0x2FF ; addr++)
	{
		XIOModule_IoWriteWord(&gpo, addr, 0xABCDABCD);
		for(i = 0;i<100;i++)
		{
		  result = XIOModule_IoReadWord(&gpo,addr);
		  if(result != 0xABCDABCD)
			  xil_printf("Error byte @0x%x : 0x%x test number %d\n\r", addr, result, i);
		  else
			  xil_printf("OK @%x %d\r",addr, i);
		}
	}
}
void Memory_test_8b(XIOModule ioModule){
	u32 addr;
	u8 result;
	int i;
	for(addr = 0 ; addr < 0x2FF ; addr++)
	{
		XIOModule_IoWriteByte(&gpo, addr, 0xAB);
		for(i = 0;i<100;i++)
		{
		  result = XIOModule_IoReadByte(&gpo,addr);
		  if(result != 0xAB)
			  xil_printf("Error byte @0x%x : 0x%x test number %d\n\r", addr, result, i);
		  else
			  xil_printf("OK @%x %d\r",addr, i);
		}
	}
}

void timerTick(void* ref) {
  ct++; // increase ct every millisecond
}

void delay(u32 ms) {
  ct = 0; // set the counter to 0
  while (ct < ms) // wait for ms number of milliseconds
    ;
}

int main()
{
    XIOModule_Initialize(&gpo, XPAR_IOMODULE_0_DEVICE_ID); // Initialize the GPO module

	microblaze_register_handler(XIOModule_DeviceInterruptHandler,
						  XPAR_IOMODULE_0_DEVICE_ID); // register the interrupt handler

	XIOModule_Start(&gpo); // start the GPO module

	XIOModule_Connect(&gpo, XIN_IOMODULE_FIT_1_INTERRUPT_INTR, timerTick,NULL); // register timerTick() as our interrupt handler
	XIOModule_Enable(&gpo, XIN_IOMODULE_FIT_1_INTERRUPT_INTR); // enable the interrupt

	microblaze_enable_interrupts(); // enable global interrupts

    delay(5000);


    XIOModule_IoWriteByte(&gpo, 0x4, 0x2);
    xil_printf("0x%x : %x\r\n", 4, XIOModule_IoReadByte(&gpo, 0x4));
    xil_printf("0x%x : %x\r\n", 4, XIOModule_IoReadByte(&gpo, 0x4));
    xil_printf("0x%x : %x\r\n", 4, XIOModule_IoReadByte(&gpo, 0x4));
    xil_printf("0x%x : %x\r\n", 4, XIOModule_IoReadByte(&gpo, 0x4));
    while(1){
    	//xil_printf("0x%x : %x\r\n", 4, XIOModule_IoReadByte(&gpo, 0x4));
    }

    return 0;
}
