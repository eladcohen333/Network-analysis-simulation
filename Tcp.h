#pragma once
#include "Packet.h"
#include <iostream>
using namespace std;


class TCP : public Packet
{

public:
	TCP(string, string, int);

	virtual string get_type();
};
