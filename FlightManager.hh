#ifndef FLIGHTMANAGER_HH
#define FLIGHTMANAGER_HH
#include <iostream>
#include <iterator>
#include <list>
#include <fstream>
#include <sstream>
#include <string>
#include "Flights.hh"
using namespace std;

class FlightManager
{
private:
    list<Flight *> Flights;

public:
    FlightManager();
    void read_flights(string filename);
    void show_flights(list<Flight *> Flights);
    list<Flight *> get_flights();
};

#endif