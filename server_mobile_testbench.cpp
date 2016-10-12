#include "server_mobile.h"

int sc_main(int argc, char* argv[]) {
	sc_signal < sc_bigint <4> > current_image,total_images, current_object, total_objects, number_of_packets, current_packet;			//active high inputs
	sc_signal < sc_bigint <8> > start_time, end_time;
	sc_signal < bool > clk;	
	sc_signal <bool > network_busy;
	sc_signal < sc_bigint <1> > ready, wait_time, transmission_complete;
	sc_signal <sc_bigint<74> > physical_packet_out, counter; //goes high when overflow or both counts equal each other 
	sc_signal < sc_bigint <8> > x_coordinate1, y_coordinate1, x_coordinate2, y_coordinate2;
	
	
	//sc_clock clock("clock", 10, SC_NS, .5);				//clock with .5ns duty cycle
	int i;
											
	server_mobile c1("Server_mobile");
	c1.total_images(total_images);
	c1.network_busy(network_busy);
	c1.current_image(current_image);
	c1.ready(ready);
	c1.clk(clk);
	c1.physical_packet_out(physical_packet_out);
	c1.current_object(current_object);
	c1.total_objects(total_objects);
	c1.x_coordinate1(x_coordinate1);
	c1.y_coordinate1(y_coordinate1);
	c1.x_coordinate2(x_coordinate2);
	c1.y_coordinate2(y_coordinate2);
	c1.start_time(start_time);
	c1.end_time(end_time);
	c1.wait_time(wait_time);
	c1.number_of_packets(number_of_packets);
	c1.current_packet(current_packet);
	c1.transmission_complete(transmission_complete);
	c1.counter(counter);

	//open vcd file
	sc_trace_file *file;
	file = sc_create_vcd_trace_file("server_mobile");
	file->set_time_unit(500, SC_PS);				// resolution (trace) ps
	sc_trace(file, clk, "clock");
	sc_trace(file, total_images, "total_images");
	sc_trace(file, network_busy, "network_busy");
	sc_trace(file, current_image, "current_image");
	sc_trace(file, ready, "ready");
	sc_trace(file, physical_packet_out, "physical_packet_out");
	sc_trace(file, current_object, "current_object");
	sc_trace(file, total_objects, "total_objects");
	sc_trace(file, x_coordinate1, "x_coordinate1");
	sc_trace(file, y_coordinate1, "y_coordinate1");
	sc_trace(file, x_coordinate2, "x_coordinate2");
	sc_trace(file, y_coordinate2, "y_coordinate2");
	sc_trace(file, start_time, "start_time");
	sc_trace(file, end_time, "end_time");
	sc_trace(file, wait_time, "wait_time");
	sc_trace(file, number_of_packets, "number_of_packets");
	sc_trace(file, current_packet, "current_packet");
	sc_trace(file, transmission_complete, "transmission_complete");
	sc_trace(file, counter, "counter");

//physical_packet_out = "111001110";
network_busy=1;
for (i = 0; i<=2; i++)
{
    clk = 0; 
    sc_start(1, SC_NS);
    clk = 1; 
    sc_start(1, SC_NS);
};

network_busy=0;
for (i = 0; i<= 100; i++)
{
	clk = 0; 
    sc_start(1, SC_NS);
    clk = 1; 
    sc_start(1, SC_NS);
};


clk = 0; 
    sc_start(1, SC_NS);
    clk = 1; 
    sc_start(1, SC_NS);

sc_start(1, SC_NS);
sc_close_vcd_trace_file(file);
sc_stop();
return (0);
}