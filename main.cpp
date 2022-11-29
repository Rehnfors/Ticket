#include <iostream>
#include <iterator>
#include <list>
#include <fstream>
#include <sstream>
#include <string>
#include "Flights.hh"
#include "Bookings.hh"
#include "FlightManager.hh"
#include "BookingManager.hh"
#include "Ticketmanager.hh"

using namespace std;


int main(int argc, char const *argv[])
{
    BookingManager bej;
    bej.read_bookings("bookings.csv");

    FlightManager hej;
    hej.read_flights("flights.csv");

    TicketManager ticket;
    ticket.get_seat(hej.get_flights(), bej.get_bookings());
    
    return 0;
}
