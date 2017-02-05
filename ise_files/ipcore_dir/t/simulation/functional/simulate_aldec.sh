# (c) Copyright 2011 - 2012 Xilinx, Inc. All rights reserved.
# 
# This file contains confidential and proprietary information
# of Xilinx, Inc. and is protected under U.S. and
# international copyright and other intellectual property
# laws.
# 
# DISCLAIMER
# This disclaimer is not a license and does not grant any
# rights to the materials distributed herewith. Except as
# otherwise provided in a valid license issued to you by
# Xilinx, and to the maximum extent permitted by applicable
# law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
# WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
# AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
# BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
# INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
# (2) Xilinx shall not be liable (whether in contract or tort,
# including negligence, or under any other theory of
# liability) for any loss or damage of any kind or nature
# related to, arising under or in connection with these
# materials, including for any direct, or any indirect,
# special, incidental, or consequential loss or damage
# (including loss of data, profits, goodwill, or any type of
# loss or damage suffered as a result of any action brought
# by a third party) even if such damage or loss was
# reasonably foreseeable or Xilinx had been advised of the
# possibility of the same.
# 
# CRITICAL APPLICATIONS
# Xilinx products are not designed or intended to be fail-
# safe, or for use in any application requiring fail-safe
# performance, such as life-support or safety devices or
# systems, Class III medical devices, nuclear facilities,
# applications related to the deployment of airbags, or any
# other applications that could lead to death, personal
# injury, or severe property or environmental damage
# (individually and collectively, "Critical
# Applications"). Customer assumes the sole risk and
# liability of any use of Xilinx products in Critical
# Applications, subject only to applicable laws and
# regulations governing limitations on product liability.
# 
# THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
# PART OF THIS FILE AT ALL TIMES.

echo "cleaning work..."
rm -rf  aldec*log work/ dataset.asdb
echo "Running bfm example"
vlib work
echo "AXI3--Tests(16) "
vlib work
vlog -work work ../cdn_axi3_example_master_v_vhd_tb.v ../cdn_axi3_example_slave_v_vhd_tb.v +incdir+./
echo "AXI3--Tests(1 of 16) "
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test1.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(2 of 16) "
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test2.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;" 
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(3 of 16)"
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test3.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(4 of 16)"
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test4.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(5 of 16)"
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test5.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(6 of 16)"
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test6.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(7 of 16)"
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test7.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(8 of 16)"
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test8.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(9 of 16)"
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test9.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(10 of 16)"
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test10.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(11 of 16)"
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test11.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(12 of 16)"
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test12.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(13 of 16)"
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test13.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(14 of 16)"
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test14.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(15 of 16)"
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_test15.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_tb -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI3--Tests(16 of 16)"
vcom -work work ../cdn_axi3_example_package.vhd ../cdn_axi3_example_memory_model_test.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi3_example_memory_model_test -do "run -all;exit;"
cat aldec.log >> aldec_all.log
#-----------------------------------------------------------------------
echo "AXI4--Tests(14)"
rm -rf work
vlib work
vlog -work work ../cdn_axi4_example_master_v_vhd_tb.v ../cdn_axi4_example_slave_v_vhd_tb.v +incdir+./

echo "AXI4--Tests(1 of 14)"
vcom -work work ../cdn_axi4_example_package.vhd ../cdn_axi4_example_test1.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_example_tb  -do "run -all;exit;" 
cat aldec.log >> aldec_all.log
echo "AXI4--Tests(2 of 14)"
vcom -work work ../cdn_axi4_example_package.vhd ../cdn_axi4_example_test2.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_example_tb  -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4--Tests(3 of 14)"
vcom -work work ../cdn_axi4_example_package.vhd ../cdn_axi4_example_test3.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_example_tb  -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4--Tests(4 of 14)"
vcom -work work ../cdn_axi4_example_package.vhd ../cdn_axi4_example_test4.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_example_tb  -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4--Tests(5 of 14)"
vcom -work work ../cdn_axi4_example_package.vhd ../cdn_axi4_example_test5.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_example_tb  -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4--Tests(6 of 14)"
vcom -work work ../cdn_axi4_example_package.vhd ../cdn_axi4_example_test6.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_example_tb  -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4--Tests(7 of 14)"
vcom -work work ../cdn_axi4_example_package.vhd ../cdn_axi4_example_test7.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_example_tb  -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4--Tests(8 of 14)"
vcom -work work ../cdn_axi4_example_package.vhd ../cdn_axi4_example_test8.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_example_tb  -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4--Tests(9 of 14)"
vcom -work work ../cdn_axi4_example_package.vhd ../cdn_axi4_example_test9.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_example_tb  -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4--Tests(10 of 14)"
vcom -work work ../cdn_axi4_example_package.vhd ../cdn_axi4_example_test10.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_example_tb  -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4--Tests(11 of 14)"
vcom -work work ../cdn_axi4_example_package.vhd ../cdn_axi4_example_test11.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_example_tb  -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4--Tests(12 of 14)"
vcom -work work ../cdn_axi4_example_package.vhd ../cdn_axi4_example_test12.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_example_tb  -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4--Tests(13 of 14)"
vcom -work work ../cdn_axi4_example_package.vhd ../cdn_axi4_example_test13.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_example_tb  -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4--Tests(14 of 14)"
vcom -work work ../cdn_axi4_example_package.vhd ../cdn_axi4_example_memory_model_test.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_example_memory_model_test  -do "run -all;exit;"
cat aldec.log >> aldec_all.log

#-----------------------------------------------------------------------


echo "AXI4-Lite--Tests(10)"
rm -rf work
vlib work
vlog -work work ../cdn_axi4_lite_example_master_v_vhd_tb.v ../cdn_axi4_lite_example_slave_v_vhd_tb.v

echo "AXI4-Lite--Tests(1 of 10)"
vcom -work work ../cdn_axi4_lite_example_package.vhd ../cdn_axi4_lite_example_test1.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_lite_example_test -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4-Lite--Tests(2 of 10)"
vcom -work work ../cdn_axi4_lite_example_package.vhd ../cdn_axi4_lite_example_test2.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_lite_example_test -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4-Lite--Tests(3 of 10)"
vcom -work work ../cdn_axi4_lite_example_package.vhd ../cdn_axi4_lite_example_test3.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_lite_example_test -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4-Lite--Tests(4 of 10)"
vcom -work work ../cdn_axi4_lite_example_package.vhd ../cdn_axi4_lite_example_test4.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_lite_example_test -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4-Lite--Tests(5 of 10)"
vcom -work work ../cdn_axi4_lite_example_package.vhd ../cdn_axi4_lite_example_test5.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_lite_example_test -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4-Lite--Tests(6 of 10)"
vcom -work work ../cdn_axi4_lite_example_package.vhd ../cdn_axi4_lite_example_test6.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_lite_example_test -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4-Lite--Tests(7 of 10)"
vcom -work work ../cdn_axi4_lite_example_package.vhd ../cdn_axi4_lite_example_test7.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_lite_example_test -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4-Lite--Tests(8 of 10)"
vcom -work work ../cdn_axi4_lite_example_package.vhd ../cdn_axi4_lite_example_test8.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_lite_example_test -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4-Lite--Tests(9 of 10)"
vcom -work work ../cdn_axi4_lite_example_package.vhd ../cdn_axi4_lite_example_test9.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_lite_example_test -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4-Lite--Tests(10 of 10)"
vcom -work work ../cdn_axi4_lite_example_package.vhd ../cdn_axi4_lite_example_memory_model_test.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_lite_example_memory_model_test -do "run -all;exit;"
cat aldec.log >> aldec_all.log

#-----------------------------------------------------------------------

echo "AXI4-Streaming--Tests(6)"
rm -rf work
vlib work
vlog -work work ../cdn_axi4_streaming_example_master_v_vhd.v ../cdn_axi4_streaming_example_slave_v_vhd.v
echo "AXI4-Streaming--Tests(1 of 6)"
vcom -work work ../cdn_axi4_streaming_example_package.vhd ../cdn_axi4_streaming_example_test1.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_streaming_example_testbench -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4-Streaming--Tests(2 of 6)"
vcom -work work ../cdn_axi4_streaming_example_package.vhd ../cdn_axi4_streaming_example_test2.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_streaming_example_testbench -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4-Streaming--Tests(3 of 6)"
vcom -work work ../cdn_axi4_streaming_example_package.vhd ../cdn_axi4_streaming_example_test3.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_streaming_example_testbench -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4-Streaming--Tests(4 of 6)"
vcom -work work ../cdn_axi4_streaming_example_package.vhd ../cdn_axi4_streaming_example_test4.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_streaming_example_testbench -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4-Streaming--Tests(5 of 6)"
vcom -work work ../cdn_axi4_streaming_example_package.vhd ../cdn_axi4_streaming_example_test5.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_streaming_example_testbench -do "run -all;exit;"
cat aldec.log >> aldec_all.log
echo "AXI4-Streaming--Tests(6 of 6)"
vcom -work work ../cdn_axi4_streaming_example_package.vhd ../cdn_axi4_streaming_example_test6.vhd
vsim  -c -L secureip -pli libxil_riviera.so -l aldec.log work.cdn_axi4_streaming_example_testbench -do "run -all;exit;"
cat aldec.log >> aldec_all.log
mv aldec_all.log aldec.log
