#include "Tcp.h"
using namespace std;

/*Inheritance from abstract class Package  */

TCP::TCP(string destination, string source, int length) :Packet(destination, source, length)
{
}

string TCP::get_type() {
	return "TCP";
}
