#include "a.h"

int sc_main(int argc, char* argv[]) {
	sc_signal < bool > clk;	
	sc_signal < sc_bigint <8> > x_1, y_1, x_2, y_2;
	sc_signal < sc_bigint <8> > x_12, y_12, x_22, y_22, x_13, y_13, x_23, y_23;
	sc_signal < sc_bigint <8> > starttime, endtime;
	sc_signal < sc_bigint <8> > starttime2, endtime2;
	sc_signal < sc_bigint <8> > starttime3, endtime3;
	sc_signal < sc_bigint <1> > waittime;
	sc_signal < sc_bigint <1> > waittime2, waittime3;
	sc_signal < sc_bigint<49> > physical_packet_out;
	sc_signal < sc_bigint<49> > physical_packet_out2;
	sc_signal < sc_bigint<49> > physical_packet_out3;
	sc_signal <sc_bigint<1> > copy_new_image_flag;
	//sc_clock clock("clock", 80, SC_NS, 1);				
	//int i;

	mobile_processor m1("mobile_processor");
	m1.x_1(x_1);
	m1.y_1(y_1);
	m1.x_2(x_2);
	m1.y_2(y_2);

  m1.x_12(x_12);
	m1.y_12(y_12);
	m1.x_22(x_22);
	m1.y_22(y_22);

	m1.x_13(x_13);
	m1.y_13(y_13);
	m1.x_23(x_23);
	m1.y_23(y_23);
	
	m1.clk(clk);
	m1.starttime(starttime);
	m1.endtime(endtime);
	m1.waittime(waittime);
	
	m1.starttime2(starttime2);
	m1.endtime2(endtime2);
	m1.waittime2(waittime2);
	m1.starttime3(starttime3);
	m1.endtime3(endtime3);
	m1.waittime3(waittime3);

	m1.physical_packet_out(physical_packet_out);
	m1.physical_packet_out2(physical_packet_out2);
	m1.physical_packet_out3(physical_packet_out3);
	m1.copy_new_image_flag(copy_new_image_flag);

	//open vcd file
	sc_trace_file *file;
	file = sc_create_vcd_trace_file("mobile_processor");
	file->set_time_unit(500, SC_PS);				// resolution (trace) ps
	sc_trace(file, clk, "clock");
	sc_trace(file, x_1, "x_1");
	sc_trace(file, y_1, "y_1");
	sc_trace(file, x_2, "x_2");
	sc_trace(file, y_2, "y_2");

	sc_trace(file, x_12, "x_12");
	sc_trace(file, y_12, "y_12");
	sc_trace(file, x_22, "x_22");
	sc_trace(file, y_22, "y_22");

	sc_trace(file, x_13, "x_13");
	sc_trace(file, y_13, "y_13");
	sc_trace(file, x_23, "x_23");
	sc_trace(file, y_23, "y_23");

	sc_trace(file, starttime, "starttime");
	sc_trace(file, endtime, "endtime");
	sc_trace(file, waittime, "waittime");

		sc_trace(file, starttime2, "starttime2");
	sc_trace(file, endtime2, "endtime2");
	sc_trace(file, waittime2, "waittime2");
		sc_trace(file, starttime3, "starttime3");
	sc_trace(file, endtime3, "endtime3");
	sc_trace(file, waittime3, "waittime3");

	sc_trace(file, physical_packet_out, "physical_packet_out");
	sc_trace(file, physical_packet_out2, "physical_packet_out2");
	sc_trace(file, physical_packet_out3, "physical_packet_out3");
	sc_trace (file, copy_new_image_flag, "copy_new_image_flag");


copy_new_image_flag =1;
for (int i = 0; i<=80; i++)
{
    clk = 0; 
    sc_start(1, SC_NS);
    clk = 1; 
    sc_start(1, SC_NS);
};


sc_start(80, SC_NS);
sc_close_vcd_trace_file(file);
sc_stop();
return (0);
}
