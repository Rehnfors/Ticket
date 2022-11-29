#include <iostream>
#include <iterator>
#include <cstdlib>
#include <list>
#include <fstream>
#include <sstream>
#include <string>
#include "Bookings.hh"

using namespace std;

// Booking setters
void Booking::set_bookingNo(int bookingNo) { this->bookingNo = bookingNo; }
void Booking::set_date(string date) { this->date = date; }
void Booking::set_time(string btime) { this->time = btime; }
void Booking::set_departure(string departure) { this->departure = departure; }
void Booking::set_destination(string destination) { this->destination = destination; }
void Booking::set_seatClass(string seatClass) { this->seatClass = seatClass; }
void Booking::set_fName(string fName) { this->fName = fName; }
void Booking::set_lName(string lName) { this->lName = lName; }

// Getters
int Booking::get_bookingNo() { return this->bookingNo; }
string Booking::get_date() { return this->date; }
string Booking::get_time() { return this->time; }
string Booking::get_departure() { return this->departure; }
string Booking::get_destination() { return this->destination; }
string Booking::get_seatClass() { return this->seatClass; }
string Booking::get_fName() { return this->fName; }
string Booking::get_lName() { return this->lName; }
