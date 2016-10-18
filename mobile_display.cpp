#include "a.h"
int j;

void mobile_processor::image_info()
{
			temp_newObjectFlag = newObjectFlag;

			if (temp_newObjectFlag==0)
			{
				
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

			}
			 
			else 
			{	
				for (temp_count=0;temp_count<=2;temp_count++)
				{
					
					if (temp_count==0)
						
			{	
				count = temp_count;
			temp_physical_packet_out = physical_packet_out;

			temp_x_1 = temp_physical_packet_out.range(7,0);
			x_1 = temp_x_1;

			temp_y_1 = temp_physical_packet_out.range(15,8);
			y_1= temp_y_1;

			temp_x_2 = temp_physical_packet_out.range(23,16);
			x_2 = temp_x_2;

			temp_y_2 = temp_physical_packet_out.range(31,24);
			y_2 = temp_y_2;
			
			ObjectId="10101010";	
			//ObjectId = temp_ObjectId;
			

			temp_starttime =    temp_physical_packet_out.range(39,32);
			starttime = temp_starttime;

			temp_endtime =      temp_physical_packet_out.range(47,40);
			endtime = temp_endtime;

			temp_waittime = temp_endtime - temp_starttime;
			//temp_waittime =     temp_physical_packet_out.range(48,48);
			waittime= temp_waittime;

			
				} 
					//ObjectId="10101010 ";
			// wait for the second packet, the previous object needs to be deleted also.
				if (temp_count==1)
				
				{
					count = temp_count;
			temp_physical_packet_out2 = physical_packet_out2;

			temp_x_12 = temp_physical_packet_out2.range(7,0);
			x_12 = temp_x_12;

			temp_y_12 = temp_physical_packet_out2.range(15,8);
			y_12= temp_y_12;

			temp_x_22 = temp_physical_packet_out2.range(23,16);
			x_22 = temp_x_22;

			temp_y_22 = temp_physical_packet_out2.range(31,24);
			y_22 = temp_y_22;
	
			ObjectId="10101110";	
			//ObjectId = temp_ObjectId;
			

			temp_starttime2 =    temp_physical_packet_out2.range(39,32);
			starttime2 = temp_starttime2;

			temp_endtime2 =      temp_physical_packet_out2.range(47,40);
			endtime2 = temp_endtime2;

			temp_waittime2 = temp_endtime2 - temp_starttime2;
			//temp_waittime2 =     temp_physical_packet_out2.range(48,48);
			waittime2= temp_waittime2;
				}
			
				if (temp_count==2)
				{
					count = temp_count;
			// wait for the second packet, the previous object needs to be deleted also.

			temp_physical_packet_out3 = physical_packet_out3;

			temp_x_13 = temp_physical_packet_out3.range(7,0);
			x_13 = temp_x_13;

			temp_y_13 = temp_physical_packet_out3.range(15,8);
			y_13= temp_y_13;

			temp_x_23 = temp_physical_packet_out3.range(23,16);
			x_23 = temp_x_23;

			temp_y_23 = temp_physical_packet_out3.range(31,24);
			y_23 = temp_y_23;
	
			ObjectId="10111110";	
			//ObjectId = temp_ObjectId;
			

			temp_starttime3 =    temp_physical_packet_out3.range(39,32);
			starttime3 = temp_starttime3;

			temp_endtime3 =      temp_physical_packet_out3.range(47,40);
			endtime3 = temp_endtime3;

			temp_waittime3 = temp_endtime3 - temp_starttime3;
			//temp_waittime3 =     temp_physical_packet_out3.range(48,48);
			waittime3= temp_waittime3;	

				}
			}
	}
}
