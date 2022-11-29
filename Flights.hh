#ifndef FLIGHTS_HH
#define FLIGHTS_HH
#include <iostream>
#include <iterator>
#include <list>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;
class Flight
{
private:
    int flightNo;
    string departure;
    string destination;
    string date;
    string time;
    int nfs;
    int bfs;
    int nbs;
    int bbs;
    int nes;
    int bes;

public:
    Flight();
    // Flight setters
    void set_flightNo(int flightNo);
    void set_departure(string departure);
    void set_destination(string destination);
    void set_date(string date);
    void set_time(string time);

    void set_nfs(int nfs);
    void increase_bfs();

    void set_nbs(int nbs);
    void increase_bbs();

    void set_nes(int nes);
    void increase_bes();

    // Getters
    int get_flightNo();
    string get_departure();
    string get_destination();
    string get_date();
    string get_time();
    int get_nfs();
    int get_bfs();
    int get_nbs();
    int get_bbs();
    int get_nes();
    int get_bes();
};

#endif