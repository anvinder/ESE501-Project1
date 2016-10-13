#include "a.h"

int sc_main(int argc, char* argv[]) {
	sc_signal < bool > clk;	
	sc_signal < sc_bigint <8> > x_1, y_1, x_2, y_2;
	sc_signal < sc_bigint <8> > starttime, endtime;
	sc_signal < sc_bigint <1> > waittime;
	sc_signal < sc_bigint<49> > physical_packet_out;
	sc_signal <sc_bigint<1> > copy_new_image_flag;
	//sc_clock clock("clock", 10, SC_NS, .5);				
	//int i;

	mobile_processor m1("mobile_processor");
	m1.x_1(x_1);
	m1.y_1(y_1);
	m1.x_2(x_2);
	m1.y_2(y_2);
	m1.clk(clk);
	m1.starttime(starttime);
	m1.endtime(endtime);
	m1.waittime(waittime);
	m1.physical_packet_out(physical_packet_out);
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
	sc_trace(file, starttime, "starttime");
	sc_trace(file, endtime, "endtime");
	sc_trace(file, waittime, "waittime");
	sc_trace(file, physical_packet_out, "physical_packet_out");
	sc_trace (file, copy_new_image_flag, "copy_new_image_flag");


copy_new_image_flag =1;
for (int i = 0; i<=80; i++)
{
    clk = 0; 
    sc_start(1, SC_NS);
    clk = 1; 
    sc_start(1, SC_NS);
};


sc_start(1, SC_NS);
sc_close_vcd_trace_file(file);
sc_stop();
return (0);
}
