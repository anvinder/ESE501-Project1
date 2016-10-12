#include "server_mobile.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
void server_mobile::data_transeive()
{
	physical_packet_out = "10101011101010101101010111010101011101010101110010101011101010101110011111";
	temp_physical_packet_out = physical_packet_out;
	if (network_busy==1)
	{
		//temp_physical_packet_out = "111001110";
		physical_packet_out= temp_physical_packet_out;
	}
	else 
	{	
			if (network_busy==0)
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
			
			temp_transmission_complete = temp_physical_packet_out.range(74,74);
			transmission_complete= temp_transmission_complete;



	}

}


int main()
{
string line_;
	ifstream file_("session.txt");
	if (file_.is_open())
	{
	    while (getline(file_, line_))
		{
			cout <<line_<<endl;
		}
		file_.close();
	}
	else
	cout <<" file is not open";
	return 0;
}
