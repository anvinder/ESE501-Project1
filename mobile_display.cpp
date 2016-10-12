#include "a.h"

void mobile_processor::image_info()
{
			
			//physical_packet_out2 = "110101011101010101101010111010101011101010101110010101011101010101110011111"; //75
			physical_packet_out = "1010101011101010101110010101011101010101110011111";//49
			temp_physical_packet_out = physical_packet_out;
			temp_x_1 = temp_physical_packet_out.range(7,0);
			x_1 = temp_x_1;

			temp_y_1 = temp_physical_packet_out.range(15,8);
			y_1= temp_y_1;

			temp_x_2 = temp_physical_packet_out.range(23,16);
			x_2 = temp_x_2;

			temp_y_2 = temp_physical_packet_out.range(31,24);
			y_2 = temp_y_2;
	
			temp_starttime =    temp_physical_packet_out.range(39,32);
			starttime = temp_starttime;

			temp_endtime =      temp_physical_packet_out.range(47,40);
			endtime = temp_endtime;

			temp_waittime =     temp_physical_packet_out.range(48,48);
			waittime= temp_waittime;
}