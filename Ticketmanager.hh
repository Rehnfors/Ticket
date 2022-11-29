#ifndef TICKETMANAGER_HH
#define TICKETMANAGER_HH

#include <iostream>
#include <iterator>
#include <list>
#include <fstream>
#include <sstream>
#include <string>
#include "Flights.hh"
#include "Bookings.hh"

using namespace std;

class TicketManager
{
public:
    TicketManager();
    list<Flight *>::iterator f;
    list<Booking *>::iterator b;

    void get_seat(list<Flight *> Flights, list<Booking *> Bookings);
};

#endif