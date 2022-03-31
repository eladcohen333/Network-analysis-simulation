#include <iostream>
#include<fstream>
#include<string>
#include"Packet.h"
#include"Speed_network.h"
#include"Udp.h"
#include"Tcp.h"
#include"Main_menu.h"
#include<vector>
using namespace std;

/*Read data.txt that include TCP/UDP protocol and we creating objects according the data we got /*/

int main() 
{
    string line, UDP_TCP, dest, src, lengt;
    int leng = 0;
    Packet* temp;
    vector<Packet*> pack;
    ifstream istr("data.txt");
    while (getline(istr, line))
    {
        if (line.find("protocol") != -1) 
        {
            UDP_TCP = line.substr(line.find("protocol\": \"") + 12, 3);

            dest = line.substr(line.find("Destination\":") + 14, 14);
            while (dest[dest.size() - 1] == ',' || dest[dest.size() - 1] == ' ')
            {
                dest.pop_back();
            }

            src = line.substr(line.find("Source\":") + 9, 14);
            while (src[src.size() - 1] == ',' || src[src.size() - 1] == ' ')
            {
                src.pop_back();
            }

            lengt = line.substr(line.find("length\":") + 9, 4);
            while (lengt[lengt.size() - 1] == ',' || lengt[lengt.size() - 1] == ']' || lengt[lengt.size() - 1] == '}')
            {
                lengt.pop_back();
            }
            leng = stoi(lengt);
            if (UDP_TCP == "UDP") 
            {
                temp = new UDP(dest, src, leng);
                pack.push_back(temp);
            }
            else 
            {
                temp = new TCP(dest, src, leng);
                pack.push_back(temp);
            }
        }
    }
    main_menu(pack);
    return 0;
}