#ifndef BOOKINGS_HH
#define BOOKINGS_HH

#include <iostream>
#include <iterator>
#include <list>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

class Booking
{
private:
    int bookingNo;
    string date;
    string time;
    string departure;
    string destination;
    string seatClass;
    string fName;
    string lName;

public:
    Booking(){};
    // Booking setters
    void set_bookingNo(int bookingNo);
    void set_date(string date);
    void set_time(string time);
    void set_departure(string departure);
    void set_destination(string destination);
    void set_seatClass(string seatClass);
    void set_fName(string fName);
    void set_lName(string lName);

    // Getters
    int get_bookingNo();
    string get_date();
    string get_time();
    string get_departure();
    string get_destination();
    string get_seatClass();
    string get_fName();
    string get_lName();
};

#endif 