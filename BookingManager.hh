#ifndef BOOKINGMANAGER_HH
#define BOOKINGMANAGER_HH
#include <iostream>
#include <iterator>
#include <list>
#include <fstream>
#include <sstream>
#include <string>
#include "Bookings.hh"

using namespace std;

class BookingManager
{
private:
    list<Booking *> Bookings;

public:
    BookingManager();
    void read_bookings(string filename);
    void show_bookings(list<Booking *> Bookings);
    list<Booking *> get_bookings();
};

#endif