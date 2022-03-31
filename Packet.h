#pragma once
#include <string>
using namespace std;


class Packet
{

protected:
	string destination;
	string source;
	int length;

public:
	Packet(string, string, int);
	string get_destination();
	string get_source();
	int get_length();

	virtual string get_type() = 0;
};
