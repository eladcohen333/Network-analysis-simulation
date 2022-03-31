#include "Packet.h"
#include <iostream>
#include <string>
using namespace std;

/*create abstract class for UDP/TCP */
Packet::Packet(string dest, string src, int lengt) {
	destination = dest;
	source = src;
	length = lengt;
}


string Packet::get_destination() 
{
	return destination;
}

string Packet::get_source()
{
	return source;
}

int Packet::get_length()
{
	return length;
}

