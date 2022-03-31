#include "Udp.h"
using namespace std;

/*Inheritance from abstract class Package  */

UDP::UDP(string destination, string source, int length) :Packet(destination, source, length)
{
}


string UDP::get_type()
{
	return "UDP";
}