#pragma once
#include<iostream>
#include<vector>
#include<string>
#include <iomanip>
using std::setprecision;
using namespace std;


/*Function that responsbility to every case */

bool bigger_then(int number, vector<Packet*>& pack)
{
    bool b = false;
    for (int i = 0; i < pack.size(); i++)
    {
        if (number < pack[i]->get_length())
        {
            cout << pack[i]->get_type() << " from " << pack[i]->get_source() << " to " << pack[i]->get_destination() << " length: " << pack[i]->get_length() << endl;
            b = true;
        }
    }
    return b;
}

bool smaller_then(int number, vector<Packet*>& pack)
{
    bool b = false;
    for (int i = 0; i < pack.size(); i++)
    {
        if (number > pack[i]->get_length())
        {
            cout << pack[i]->get_type() << " from " << pack[i]->get_source() << " to " << pack[i]->get_destination() << " length: " << pack[i]->get_length() << endl;
            b = true;
        }
    }
    return b;
}

bool same_destination(string dest, vector<Packet*>& pack)
{
    bool b = false;
    for (int i = 0; i < pack.size(); i++)
    {
        if (pack[i]->get_destination() == dest)
        {
            cout << pack[i]->get_type() << " from " << pack[i]->get_source() << " to " << pack[i]->get_destination() << " length: " << pack[i]->get_length() << endl;
            b = true;
        }
    }
    return b;
}

bool same_source(string src, vector<Packet*>& pack)
{
    bool b = false;
    for (int i = 0; i < pack.size(); i++)
    {
        if (pack[i]->get_source() == src)
        {
            cout << pack[i]->get_type() << " from " << pack[i]->get_source() << " to " << pack[i]->get_destination() << " length: " << pack[i]->get_length() << endl;
            b = true;
        }
    }
    return b;
}

bool same_dest_2_num(string dest, vector <Packet*>& pack)
{
    bool b = false;
    for (int i = 0; i < pack.size(); i++)
    {
        string test = pack[i]->get_destination().substr(0, 3);
        if (test[test.size() - 1] == '.')
        {
            test.pop_back();
        }
        if (test == dest)
        {
            cout << pack[i]->get_type() << " from " << pack[i]->get_source() << " to " << pack[i]->get_destination() << " length: " << pack[i]->get_length() << endl;
            b = true;
        }
    }
    return b;
}

bool same_src_2_num(string src, vector <Packet*>& pack)
{
    bool b = false;
    for (int i = 0; i < pack.size(); i++)
    {
        string test = pack[i]->get_source().substr(0, 3);
        if (test[test.size() - 1] == '.')
        {
            test.pop_back();
        }
        if (test == src)
        {
            cout << pack[i]->get_type() << " from " << pack[i]->get_source() << " to " << pack[i]->get_destination() << " length: " << pack[i]->get_length() << endl;
            b = true;
        }
    }
    return b;
}

void print_packet(vector<Packet*>& pack)
{
    for (int i = 0; i < pack.size(); i++)
    {
       cout << pack[i]->get_type() << " from " << pack[i]->get_source() << " to " << pack[i]->get_destination() << " length: " << pack[i]->get_length() << endl;
    }
}

void print_biggest(vector<Packet*>& pack)
{
    int max_leng = 0;
    int index = 0;
    for (int i = 0; i < pack.size(); i++)
    {
        if (max_leng < pack[i]->get_length())
        {
            max_leng = pack[i]->get_length();
            index = i;
        }
    }
    cout << pack[index]->get_type() << " from " << pack[index]->get_source() << " to " << pack[index]->get_destination() << " length: " << pack[index]->get_length() << endl;
}

void print_smallest(vector<Packet*>& pack)
{
    int index = 0;
    int min_leng = pack[index]->get_length();
    for (int i = 0; i < pack.size(); i++)
    {
        if (min_leng > pack[i]->get_length())
        {
            min_leng = pack[i]->get_length();
            index = i;
        }
    }
    cout << pack[index]->get_type() << " from " << pack[index]->get_source() << " to " << pack[index]->get_destination() << " length: " << pack[index]->get_length() << endl;
}

void print_tcp_smallest(vector<Packet*>pack)
{
    int index = 0;
    int min_leng = 2000;
    for (int i = 0; i < pack.size(); i++)
    {
        if (min_leng > pack[i]->get_length() && pack[i]->get_type() == "TCP")
        {
            min_leng = pack[i]->get_length();
            index = i;
        }
    }
    cout << pack[index]->get_type() << " from " << pack[index]->get_source() << " to " << pack[index]->get_destination() << " length: " << pack[index]->get_length() << endl;
}

void print_tcp_biggest(vector<Packet*>pack)
{
    int max_leng = 0;
    int index = 0;
    for (int i = 0; i < pack.size(); i++)
    {
        if (max_leng < pack[i]->get_length() && pack[i]->get_type() == "TCP")
        {
            max_leng = pack[i]->get_length();
            index = i;
        }
    }
    cout << pack[index]->get_type() << " from " << pack[index]->get_source() << " to " << pack[index]->get_destination() << " length: " << pack[index]->get_length() << endl;
}

void print_udp_smallest(vector<Packet*>pack)
{
    int index = 0;
    int min_leng = 2000;
    for (int i = 0; i < pack.size(); i++)
    {
        if (min_leng > pack[i]->get_length() && pack[i]->get_type() == "UDP")
        {
            min_leng = pack[i]->get_length();
            index = i;
        }
    }
    cout << pack[index]->get_type() << " from " << pack[index]->get_source() << " to " << pack[index]->get_destination() << " length: " << pack[index]->get_length() << endl;

}

void print_udp_biggest(vector<Packet*>pack) {
    int max_leng = 0;
    int index = 0;
    for (int i = 0; i < pack.size(); i++)
    {
        if (max_leng < pack[i]->get_length() && pack[i]->get_type() == "UDP")
        {
            max_leng = pack[i]->get_length();
            index = i;
        }
    }
    cout << pack[index]->get_type() << " from " << pack[index]->get_source() << " to " << pack[index]->get_destination() << " length: " << pack[index]->get_length() << endl;
}

void sum_length(vector<Packet*>& pack)
{
    float sum_len = 0;
    float mega = 0;
    for (int i = 0; i < pack.size(); i++)
    {
        sum_len = sum_len + pack[i]->get_length();
    }
    mega = sum_len/1204;
    cout << "the size of lenght " << sum_len;
    cout << "the size of lenght by mega_bite " << mega;
}


void speed_n_funct(Speed_network S_N) 
{
    float speed_d = S_N.get_download();
    float speed_up = S_N.get_upload();
    string id = S_N.get_id();
    string serever = S_N.get_server();

    cout << "Your id computer is:  " << id << " your server company is: " << serever << "\n";
    cout << "******************************************************************\n";
    cout << "Your speed download is: " << speed_d / 1.00 << " your speed upload is: " << speed_up / 1.00<<"\n";
    cout << "******************************************************************\n\n";
}


/*Main menu */

void main_menu(vector<Packet*> &pack)
{
    Speed_network S_N;
    int num = 1;
    cout << "Hello to my program\n";
    cout << "\nIf you want to see all the packet that has a length higher a number, then given number: Press 1\n";
    cout << "If you want to see all the packet that has a length less, then given number: Press 2\n";
    cout << "If you want to see all the packet that has a specific destination: Press 3\n";
    cout << "If you want to see all the packet that has a specific source: Press 4\n";
    cout << "If you want to see all the packet that starts specific destination, please a given number: Press 5\n";
    cout << "If you want to see all the packet that starts specific source, please a given number: Press 6\n";
    cout << "If you want to see all the packets: Press 7\n";
    cout << "If you want to see the packet with the highest length: Press 8\n";
    cout << "If you want to see the packet with the smallest length: Press 9\n";
    cout << "If you want to see the UDP packet with the smallest length: Press 10\n";
    cout << "If you want to see the UDP packet with the biggest length: Press 11\n";
    cout << "If you want to see the TCP packet with the smallest length: Press 12\n";
    cout << "If you want to see the TCP packet with the biggest length: Press 13\n";
    cout << "If you want to see the all sum: Press 14\n";
    cout << "If you want to see your  network connect: Press 15\n";

    cout << "If you want to exit the program: Press 0\n\n";
   

    while (num) 
    {
        cin >> num;
        int number = 0;
        string value;
        switch (num) 
        {
        case 1:
            cout << "Please give me the minimum length: ";
            cin >> number;
            while (number <= 0)
            {
                cout << "Please input a positive length: ";
                cin >> number;
            }
            if (!bigger_then(number - 1, pack))
            {
                cout << "\nNo data found!";
            }
            break;
        
        case 2:
            cout << "Please give me the maximum length: ";
            cin >> number;
            while (number <= 0)
            {
                cout << "Please input a positive length: ";
                cin >> number;
            }
            if (!smaller_then(number + 1, pack))
            {
                cout << "\nNo data found!";
            }
            break;
        
        case 3:
            cout << "Input the destination: ";
            cin >> value;
            if (!same_destination(value, pack))
            {
                cout << "\nNo packets with the " << value << " destination!";
            }
            break;
        
        case 4:
            cout << "Input the Source: ";
            cin >> value;
            if (!same_source(value, pack))
            {
                cout << "\nNo packets with the " << value << " source!";
            }
            break;
        
        case 5:
            cout << "Input the first 2/3 numbers of the destination: ";
            cin >> value;
            if (!same_dest_2_num(value, pack))
            {
                cout << "\nNo packets that starts with " << value << "!!";
            }
            break;
        
        case 6:
            cout << "Input the first 2/3 numbers of the source: ";
            cin >> value;
            if (!same_src_2_num(value, pack))
            {
                cout << "\nNo packets that starts with " << value << "!!";
            }
            break;
        
        case 7:
            print_packet(pack);
            break;
        
        case 8:
            print_biggest(pack);
            break;
        
        case 9:
            print_smallest(pack);
            break;
        
        case 10:
            print_udp_smallest(pack);
            break;
        
        case 11:
            print_udp_biggest(pack);
            break;
        
        case 12:
            print_tcp_smallest(pack);
            break;
  
        case 13:
            print_tcp_biggest(pack);
            break;
 
        case 14:
           sum_length(pack);
           break;

        case 15:
            S_N.set_download();
            S_N.set_upload();
            S_N.set_id();
            S_N.set_server();
            speed_n_funct(S_N);
            break;
       
        case 16:

            cout << "Hello to my program\n";
            cout << "\nIf you want to see all the packet that has a length higher a number, then given number: Press 1\n";
            cout << "If you want to see all the packet that has a length less, then given number: Press 2\n";
            cout << "If you want to see all the packet that has a specific destination: Press 3\n";
            cout << "If you want to see all the packet that has a specific source: Press 4\n";
            cout << "If you want to see all the packet that starts specific destination, please a given number: Press 5\n";
            cout << "If you want to see all the packet that starts specific source, please a given number: Press 6\n";
            cout << "If you want to see all the packets: Press 7\n";
            cout << "If you want to see the packet with the highest length: Press 8\n";
            cout << "If you want to see the packet with the smallest length: Press 9\n";
            cout << "If you want to see the UDP packet with the smallest length: Press 10\n";
            cout << "If you want to see the UDP packet with the biggest length: Press 11\n";
            cout << "If you want to see the TCP packet with the smallest length: Press 12\n";
            cout << "If you want to see the TCP packet with the biggest length: Press 13\n";
            cout << "If you want to see the all sum: Press 14\n";
            cout << "If you want to see your  network connect: Press 15\n";


            cout << "If you want to exit the program: Press 0\n\n";
        }

        if (num) 
        {
        cout << "\nPlease give a valid number between 1->15, or 0 to exit the program! ,or 16 for the Main menu" << endl;
        }
    }
}