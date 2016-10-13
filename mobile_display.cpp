#include "a.h"

void mobile_processor::image_info()
{
			  temp_copy_new_image_flag = copy_new_image_flag;
			if (temp_copy_new_image_flag==0)
			{
				//physical_packet_out = "0000000000000000000000000000000000000000000000000";  //49
			temp_x_1 = 0;
			x_1 = temp_x_1;

			temp_y_1 = 0;
			y_1= temp_y_1;

			temp_x_2 = 0;
			x_2 = temp_x_2;

			temp_y_2 = 0;
			y_2 = temp_y_2;
	
			temp_starttime =  0;
			starttime = temp_starttime;

			temp_endtime =  0;
			endtime = temp_endtime;

			temp_waittime = 0;
			waittime= temp_waittime;

			temp_copy_new_image_flag =1;
			copy_new_image_flag== temp_copy_new_image_flag;
			}
			 
			else 
			{	
				physical_packet_out = "1010101011101010101110010101011101010101110011111";
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

			temp_copy_new_image_flag =1;
			copy_new_image_flag== temp_copy_new_image_flag;
			
			}
}
