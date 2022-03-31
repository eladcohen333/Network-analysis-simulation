#pragma once
#include <string>
#include<array>
using namespace std;


class Speed_network
{

private:
	float download_mbps;
    float upload_mbps;
    string id_computer;
    string server_company;

public:
    void set_download();
    void set_upload();
    void set_id();
    void set_server();
    Speed_network();
    float get_download();
    float get_upload();
    string get_id();
    string get_server();
    int rand_server();
    float rand_dow();
    float rand_up();
    int rand_id();
    string server_name();
    string id();

};

