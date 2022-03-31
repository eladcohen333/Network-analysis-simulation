#pragma once
#include "Packet.h"
#include <iostream>
#include <fstream>
using namespace std;

class UDP : public Packet {
public:
	UDP(string, string, int);

	virtual string get_type();
};


