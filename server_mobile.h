#include "systemc.h"

SC_MODULE(server_mobile)
{
	sc_inout <bool> network_busy1;
	sc_inout < sc_bigint <74> > physical_packet_out1, physical_packet_out12, physical_packet_out13,physical_packet_out14, physical_packet_out15, physical_packet_out16;
		sc_inout <bool> network_busy2, network_busy3;
	sc_inout < sc_bigint <74> > physical_packet_out2, physical_packet_out21, physical_packet_out22, physical_packet_out23, physical_packet_out24, physical_packet_out25;
	sc_inout < sc_bigint<74> > physical_packet_out3,  physical_packet_out31, physical_packet_out32, physical_packet_out33, physical_packet_out34, physical_packet_out35;
	sc_in <bool> clk;
	sc_out < sc_bigint <4> > total_images;
	sc_out < sc_bigint <1> > ready;
	sc_out < sc_bigint <4> > current_image;
	sc_out < sc_bigint <4> >current_object;
	sc_out < sc_bigint <4> > total_objects;
	sc_out < sc_bigint <8> > x_coordinate1;
	sc_out < sc_bigint <8> > y_coordinate1;
	sc_out < sc_bigint <8> > x_coordinate2;
	sc_out < sc_bigint <8> > y_coordinate2;
	sc_out < sc_bigint <8> > start_time;
	sc_out < sc_bigint <8> > end_time;
	sc_out < sc_bigint <1> > wait_time;
	sc_out < sc_bigint <4> > number_of_packets;
	sc_out < sc_bigint <4> > current_packet;
	sc_out < bool > transmission1, transmission2, transmission3;
	//sc_inout < sc_bigint <4> > count;

	sc_bigint <74> temp_physical_packet_out;
	sc_bigint<4>   temp_total_images;//5
	sc_bigint<4>   temp_current_image;
	sc_bigint<1>   temp_ready;
	sc_bigint<4>   temp_current_object;//5
	sc_bigint<4>   temp_total_objects;
	sc_bigint<8>   temp_x_coordinate1;//18
	sc_bigint<8>   temp_y_coordinate1;//28
	sc_bigint<8>   temp_x_coordinate2;//38
	sc_bigint<8>   temp_y_coordinate2;//48
	sc_bigint<8>   temp_start_time;//56
	sc_bigint<8>   temp_end_time;//64
	sc_bigint<1>   temp_wait_time;//65
	sc_bigint<4>   temp_number_of_packets;//67
	sc_bigint<4>   temp_current_packet;//69
	sc_bigint <4>  count;


	void data_transeive();

	void read_file();

		SC_CTOR(server_mobile)
	{
		SC_METHOD(data_transeive)

			sensitive << clk.pos();

	}
	
		};
