#include "server_mobile.h"

void server_mobile::data_transeive()
{
	for (count=0; count<=5; count++)     // count is for the number of images 
	{

	
	//temp_physical_packet_out = physical_packet_out1;
	if (network_busy1==1)
	{
		temp_physical_packet_out = 0 ;
		physical_packet_out1= temp_physical_packet_out;
	}
	else 
	{	
			if (network_busy1==0)
			{
				if (count==0)
				{ 
					physical_packet_out1 = "10101011101010101101010111010101000001010101110010101011101010101110011000";
					temp_physical_packet_out = physical_packet_out1;
				}
				else 
					if (count==1)
					{
					physical_packet_out12 = "10101011100000101101010111010101011101010101110010101011101010100000011111";
					temp_physical_packet_out = physical_packet_out12;
					}
					else
						if (count==2)
						{
							physical_packet_out13 = "10101011101010000001010111010101011101010101110010101011101000001110011111";
							temp_physical_packet_out = physical_packet_out13;
						}
							else
						if (count==3)
						{
							physical_packet_out14 = "10101011101010101101010111010101011101010101110010101011101010101110011111";
							temp_physical_packet_out = physical_packet_out14;
						}
							else
						if (count==4)
						{
							physical_packet_out15 = "10000011101010101101010111010101011101010101110010101000001010101110011111";
							temp_physical_packet_out = physical_packet_out15;
						}
							else
						if (count==5)
						{
							physical_packet_out16 = "10101011000000101101010110000001011101010101110010101011101010101110011111";
							temp_physical_packet_out = physical_packet_out16;
						}


			//temp_physical_packet_out = physical_packet_out1;
			temp_ready =         temp_physical_packet_out.range(0,0);
			ready= temp_ready;

			temp_total_images =  temp_physical_packet_out.range(8,5);
			total_images= temp_total_images;

			temp_current_image =  temp_physical_packet_out.range(4,1);
			current_image= temp_current_image;

			temp_current_object =  temp_physical_packet_out.range(12,9);
			current_object= temp_current_object;

			temp_total_objects =  temp_physical_packet_out.range(16,13);
			total_objects= temp_total_objects;

			temp_x_coordinate1 = temp_physical_packet_out.range(24,17);
			x_coordinate1 = temp_x_coordinate1;

			temp_y_coordinate1 = temp_physical_packet_out.range(32,25);
			y_coordinate1= temp_y_coordinate1;

			temp_x_coordinate2 = temp_physical_packet_out.range(40,33);
			x_coordinate2 = temp_x_coordinate2;

			temp_y_coordinate2 = temp_physical_packet_out.range(48,41);
			y_coordinate2 = temp_y_coordinate2;
	
			temp_start_time =    temp_physical_packet_out.range(56,49);
			start_time = temp_start_time;

			temp_end_time =      temp_physical_packet_out.range(64,57);
			end_time = temp_end_time;

			temp_wait_time =     temp_physical_packet_out.range(65,65);
			wait_time= temp_wait_time;

			temp_number_of_packets=temp_physical_packet_out.range(69,66);
			number_of_packets = temp_number_of_packets;

			temp_current_packet= temp_physical_packet_out.range(73,70);
			current_packet = temp_current_packet;
			}
			
	}


 if (network_busy2==1)
	{
		temp_physical_packet_out = 0 ;
		physical_packet_out2= temp_physical_packet_out;
	}
	else 
	{	
		if (network_busy2==0)
			{
				if (count==0)
				{ 
					physical_packet_out2 = "10101011101010101100000111010101011100000101110010101011101010101110011100";
					temp_physical_packet_out = physical_packet_out2;
				}
				else 
					if (count==1)
					{
					physical_packet_out21 = "10101011101010101101010111010101000001010101110010101011101010101110011111";
					temp_physical_packet_out = physical_packet_out21;
					}
					else
						if (count==2)
						{
							physical_packet_out22 = "10101011101010101101010111010101011100000101110010101011101010101110011111";
							temp_physical_packet_out = physical_packet_out22;
						}
							else
						if (count==3)
						{
							physical_packet_out23 = "10101011101010101101010110000101011000010101110010101011101010101110011111";
							temp_physical_packet_out = physical_packet_out23;
						}
							else
						if (count==4)
						{
							physical_packet_out24 = "10101011101010100000010111010101011101010101110010101011101010101110011111";
							temp_physical_packet_out = physical_packet_out24;
						}
							else
						if (count==5)
						{
							physical_packet_out25 = "10101011000000001101010111010101011101010101110010101011101010101110011111";
							temp_physical_packet_out = physical_packet_out25;
						}

			temp_physical_packet_out = physical_packet_out2;
			temp_ready =         temp_physical_packet_out.range(0,0);
			ready= temp_ready;

			temp_total_images =  temp_physical_packet_out.range(8,5);
			total_images= temp_total_images;

			temp_current_image =  temp_physical_packet_out.range(4,1);
			current_image= temp_current_image;

			temp_current_object =  temp_physical_packet_out.range(12,9);
			current_object= temp_current_object;

			temp_total_objects =  temp_physical_packet_out.range(16,13);
			total_objects= temp_total_objects;

			temp_x_coordinate1 = temp_physical_packet_out.range(24,17);
			x_coordinate1 = temp_x_coordinate1;

			temp_y_coordinate1 = temp_physical_packet_out.range(32,25);
			y_coordinate1= temp_y_coordinate1;

			temp_x_coordinate2 = temp_physical_packet_out.range(40,33);
			x_coordinate2 = temp_x_coordinate2;

			temp_y_coordinate2 = temp_physical_packet_out.range(48,41);
			y_coordinate2 = temp_y_coordinate2;
	
			temp_start_time =    temp_physical_packet_out.range(56,49);
			start_time = temp_start_time;

			temp_end_time =      temp_physical_packet_out.range(64,57);
			end_time = temp_end_time;

			temp_wait_time =     temp_physical_packet_out.range(65,65);
			wait_time= temp_wait_time;

			temp_number_of_packets=temp_physical_packet_out.range(69,66);
			number_of_packets = temp_number_of_packets;

			temp_current_packet= temp_physical_packet_out.range(73,70);
			current_packet = temp_current_packet;
			}

	}



 if (network_busy3==1)
	{
		temp_physical_packet_out = 0 ;
		physical_packet_out3= temp_physical_packet_out;
	}
	else 
	{	
			if (network_busy3==0)
			{
				if (count==0)
				{ 
					physical_packet_out3 = "01100000001010101101010111010101010001010101110010101011101010101110011111";
					temp_physical_packet_out = physical_packet_out3;
				}
				else 
					if (count==1)
					{
					physical_packet_out31 = "10101011101010101001010111000101010101010101110010100111101010100010001111";
					temp_physical_packet_out = physical_packet_out31;
					}
					else
						if (count==2)
						{
							physical_packet_out32 = "10101011101010100101010111010101010001010101110000101011101010101110000110";
							temp_physical_packet_out = physical_packet_out32;
						}
							else
						if (count==3)
						{
							physical_packet_out33 = "10101010001010101101010111010101000101010101110010101011101010101110011111";
							temp_physical_packet_out = physical_packet_out33;
						}
							else
						if (count==4)
						{
							physical_packet_out34 = "10101011100000101101010110000101011101010101000010101011101010101110011001";
							temp_physical_packet_out = physical_packet_out34;
						}
							else
						if (count==5)
						{
							physical_packet_out35 = "10101011101010101101010111010000001101010101110010101011101010101110010011";
							temp_physical_packet_out = physical_packet_out35;
						}
				
			temp_physical_packet_out = physical_packet_out3;
			temp_ready =         temp_physical_packet_out.range(0,0);
			ready= temp_ready;

			temp_total_images =  temp_physical_packet_out.range(8,5);
			total_images= temp_total_images;

			temp_current_image =  temp_physical_packet_out.range(4,1);
			current_image= temp_current_image;

			temp_current_object =  temp_physical_packet_out.range(12,9);
			current_object= temp_current_object;

			temp_total_objects =  temp_physical_packet_out.range(16,13);
			total_objects= temp_total_objects;

			temp_x_coordinate1 = temp_physical_packet_out.range(24,17);
			x_coordinate1 = temp_x_coordinate1;

			temp_y_coordinate1 = temp_physical_packet_out.range(32,25);
			y_coordinate1= temp_y_coordinate1;

			temp_x_coordinate2 = temp_physical_packet_out.range(40,33);
			x_coordinate2 = temp_x_coordinate2;

			temp_y_coordinate2 = temp_physical_packet_out.range(48,41);
			y_coordinate2 = temp_y_coordinate2;
	
			temp_start_time =    temp_physical_packet_out.range(56,49);
			start_time = temp_start_time;

			temp_end_time =      temp_physical_packet_out.range(64,57);
			end_time = temp_end_time;

			temp_wait_time =     temp_physical_packet_out.range(65,65);
			wait_time= temp_wait_time;

			temp_number_of_packets=temp_physical_packet_out.range(69,66);
			number_of_packets = temp_number_of_packets;

			temp_current_packet= temp_physical_packet_out.range(73,70);
			current_packet = temp_current_packet;
			}

	}
}

}
