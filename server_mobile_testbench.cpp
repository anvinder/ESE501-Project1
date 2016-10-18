#include "server_mobile.h"

int sc_main(int argc, char* argv[]) {
	sc_signal < sc_bigint <4> > current_image,total_images, current_object, total_objects, number_of_packets, current_packet;			//active high inputs
	sc_signal < sc_bigint <8> > start_time, end_time;
	sc_signal < bool > clk;	
	sc_signal <bool > network_busy1;
	sc_signal <bool > network_busy2, network_busy3 ;
	sc_signal < sc_bigint <1> > ready, wait_time;
	sc_signal <bool> transmission1, transmission2, transmission3;
	sc_signal <sc_bigint<74> > physical_packet_out1, physical_packet_out12, physical_packet_out13, physical_packet_out14, physical_packet_out15, physical_packet_out16;  
	sc_signal <sc_bigint<74> > physical_packet_out2, physical_packet_out21, physical_packet_out22, physical_packet_out23, physical_packet_out24, physical_packet_out25;
	sc_signal <sc_bigint<74> > physical_packet_out3, physical_packet_out31, physical_packet_out32, physical_packet_out33, physical_packet_out34, physical_packet_out35; 
	sc_signal < sc_bigint <8> > x_coordinate1, y_coordinate1, x_coordinate2, y_coordinate2;
	sc_signal< sc_bigint<4> > count;
	
	//sc_clock clock("clock", 10, SC_NS, .5);				//clock with .5ns duty cycle
	int i;
											
	server_mobile c1("Server_mobile");
	c1.total_images(total_images);
	c1.network_busy1(network_busy1);
	c1.network_busy2(network_busy2);
	c1.network_busy3(network_busy3);
	c1.current_image(current_image);
	c1.ready(ready);
	c1.clk(clk);
	c1.physical_packet_out1(physical_packet_out1);
	c1.physical_packet_out12(physical_packet_out12);
	c1.physical_packet_out13(physical_packet_out13);
	c1.physical_packet_out14(physical_packet_out14);
	c1.physical_packet_out15(physical_packet_out15);
	c1.physical_packet_out16(physical_packet_out16);
	

	c1.physical_packet_out2(physical_packet_out2);
	c1.physical_packet_out21(physical_packet_out21);
	c1.physical_packet_out22(physical_packet_out22);
	c1.physical_packet_out23(physical_packet_out23);
	c1.physical_packet_out24(physical_packet_out24);
	c1.physical_packet_out25(physical_packet_out25);

	c1.physical_packet_out3(physical_packet_out3);
	c1.physical_packet_out31(physical_packet_out31);
	c1.physical_packet_out32(physical_packet_out32);
	c1.physical_packet_out33(physical_packet_out33);
	c1.physical_packet_out34(physical_packet_out34);
	c1.physical_packet_out35(physical_packet_out35);

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
	c1.transmission1(transmission1);
	c1.transmission2(transmission2);
	c1.transmission3(transmission3);

	//open vcd file
	sc_trace_file *file;
	file = sc_create_vcd_trace_file("server_mobile");
	file->set_time_unit(500, SC_PS);				// resolution (trace) ps
	sc_trace(file, clk, "clock");
	sc_trace(file, total_images, "total_images");
	sc_trace(file, network_busy1, "network_busy1");
	sc_trace(file, network_busy2, "network_busy2");
	sc_trace(file, network_busy3, "network_busy3");
	sc_trace(file, current_image, "current_image");
	sc_trace(file, ready, "ready");
	sc_trace(file, physical_packet_out1, "physical_packet_out1");
	sc_trace(file, physical_packet_out12, "physical_packet_out12");
	sc_trace(file, physical_packet_out13, "physical_packet_out13");
	sc_trace(file, physical_packet_out14, "physical_packet_out14");
	sc_trace(file, physical_packet_out15, "physical_packet_out15");
	sc_trace(file, physical_packet_out16, "physical_packet_out16");

	sc_trace(file, physical_packet_out2, "physical_packet_out2");
	sc_trace(file, physical_packet_out21, "physical_packet_out21");
	sc_trace(file, physical_packet_out22, "physical_packet_out22");
	sc_trace(file, physical_packet_out23, "physical_packet_out23");
	sc_trace(file, physical_packet_out24, "physical_packet_out24");
	sc_trace(file, physical_packet_out25, "physical_packet_out25");

	sc_trace(file, physical_packet_out3, "physical_packet_out3");
	sc_trace(file, physical_packet_out31, "physical_packet_out31");
	sc_trace(file, physical_packet_out32, "physical_packet_out32");
	sc_trace(file, physical_packet_out33, "physical_packet_out33");
	sc_trace(file, physical_packet_out34, "physical_packet_out34");
	sc_trace(file, physical_packet_out35, "physical_packet_out35");
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
	sc_trace(file, transmission1, "transmission1");
	sc_trace(file, transmission2, "transmission2");
	sc_trace(file, transmission3, "transmission3");


network_busy1=1;
transmission1=0;
transmission2=0;
transmission3=0;
//physical_packet_out1 = "10101011101010101101010111010101011101010101110010101011101010101110011111";
for (i = 0; i<= 80; i++)
{
	clk = 0; 
    sc_start(1, SC_NS);
    clk = 1; 
    sc_start(1, SC_NS);
};

network_busy1=0;
transmission1=1;
transmission2=0;
transmission3=0;
//physical_packet_out1 = "10101011101010101101010111010101011101010101110010101011101010101110011111";
for (i = 0; i<= 80; i++)
{
	clk = 0; 
    sc_start(1, SC_NS);
    clk = 1; 
    sc_start(1, SC_NS);
};


network_busy2=1;
transmission2=0;
transmission1=0;
transmission3=0;
//physical_packet_out2 = "10101011101010101111100111010101011000110101110010100100101010101110011001";
for (i = 0; i<= 80; i++)
{
	clk = 0; 
    sc_start(1, SC_NS);
    clk = 1; 
    sc_start(1, SC_NS);
};

network_busy2=1;
transmission2=0;
transmission1=0;
transmission3=0;
//physical_packet_out2 = "10101011101010101111100111010101011000110101110010100100101010101110011001";
for (i = 0; i<= 80; i++)
{
	clk = 0; 
    sc_start(1, SC_NS);
    clk = 1; 
    sc_start(1, SC_NS);
};


network_busy2=0;
transmission2=1;
transmission1=0;
transmission3=0;
//physical_packet_out2 = "10101011101010101111100111010101011000110101110010100100101010101110011001";
for (i = 0; i<= 80; i++)
{
	clk = 0; 
    sc_start(1, SC_NS);
    clk = 1; 
    sc_start(1, SC_NS);
};


network_busy3=1;
transmission3=0;
transmission2=0;
transmission1=0;
//physical_packet_out3 = "11101011101010100001010111010111111101010101110101001011101010101110000011";
for (i = 0; i<= 80; i++)
{
	clk = 0; 
    sc_start(1, SC_NS);
    clk = 1; 
    sc_start(1, SC_NS);
};


network_busy3=0;
transmission3=1;
transmission2=0;
transmission1=0;
//physical_packet_out3 = "11101011101010100001010111010111111101010101110101001011101010101110000011";
for (i = 0; i<= 80; i++)
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
