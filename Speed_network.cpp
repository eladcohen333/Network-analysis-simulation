#include "Speed_network.h"
#include <string>
#include <iostream>
#include <random>
#include <iomanip>
#include<array>
using namespace std;
using std::endl;
using std::setprecision;

/* A speed test class that includes several features */

Speed_network::Speed_network()
{
    set_download();
    set_upload();
    set_id();
    set_server();
};

void Speed_network::set_download()
{
    download_mbps = rand_dow();
}

float Speed_network::get_download()
{
    return download_mbps;
}

string Speed_network::get_id()
{
    return id_computer;
}

void Speed_network::set_id()
{
    id_computer = id();
}

string Speed_network::get_server()
{
    return server_company;
}

void Speed_network::set_server()
{
    server_company = server_name();
}

float Speed_network::get_upload()
{
    return upload_mbps;
}

void Speed_network::set_upload()
{
    upload_mbps = rand_up();
}

float Speed_network::rand_dow()
{
    constexpr int min_d = 50;
    constexpr int max_d = 100;

    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_real_distribution<> distr(min_d, max_d);

    float num_d = distr(eng);
    return num_d;

}

float Speed_network::rand_up()
{
    constexpr int min_up = 1;
    constexpr int max_up = 50;

    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_real_distribution<> distr(min_up, max_up);

    float num_up = distr(eng);
    return num_up;

}

int Speed_network::rand_server()
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(0, 4);

    int rand_s = dist6(rng);
    return rand_s;
}

int Speed_network::rand_id()
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(0, 7);

    int rand_s = dist6(rng);
    return rand_s;
}

/*Comminication companies in Israel*/

string Speed_network::server_name() {
    array<string, 5> arr;
    arr[0] = "Partner";;
    arr[1] = "Hot";
    arr[2] = "bezaq";
    arr[3] = "unlimited";
    arr[4] = "Cellcom";
    int num = rand_server();
    return arr[num];
}

/*Show id from array */

string Speed_network::id() {
    array<string, 8> arr;
    arr[0] = "46.127.205.167";
    arr[1] = "22.188.214.100";
    arr[2] = "65.145.266.177";
    arr[3] = "48.124.65.108";
    arr[4] = "68.207.112.12";
    arr[5] = "45.132.756.112";
    arr[6] = "77.111.222.99";
    arr[7] = "66.255.645.154";
    int num = rand_id();
    return arr[num];
}
