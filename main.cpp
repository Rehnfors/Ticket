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
    try
    {
        if (argc!=3)
        {
            throw "./Ticketmanager (flightfile) (bookingsfile)";
        }
        FlightManager Flight;
        Flight.read_flights(argv[1]);

        BookingManager Booking;
        Booking.read_bookings(argv[2]);

        TicketManager ticket;
        ticket.get_seat(Flight.get_flights(), Booking.get_bookings());

        return 0;
    }
    catch (...)
    {
        cerr << "./Ticketmanager (flightfile) (bookingsfile)" << endl;
    }

    return 0;
}
