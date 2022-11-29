#include <iostream>
#include <iterator>
#include <cstdlib>
#include <list>
#include <fstream>
#include <sstream>
#include <string>
#include "Flights.hh"

using namespace std;

Flight::Flight()
{
    // Setting booked seats to 0
    this->bfs = 0;
    this->bbs = 0;
    this->bes = 0;
}
// Flight setters
void Flight::set_flightNo(int flightNo) { this->flightNo = flightNo; }
void Flight::set_departure(string departure) { this->departure = departure; }
void Flight::set_destination(string destination) { this->destination = destination; }
void Flight::set_date(string date) { this->date = date; }
void Flight::set_time(string btime) { this->time = btime; }

void Flight::set_nfs(int nfs) { this->nfs = nfs * 7; } // set number of first class seats
void Flight::increase_bfs() { this->bfs = bfs + 1; }   // increase booked first class seats

void Flight::set_nbs(int nbs) { this->nbs = nbs * 7; }
void Flight::increase_bbs() { this->bbs = bbs + 1; }

void Flight::set_nes(int nes) { this->nes = nes * 7; }
void Flight::increase_bes() { this->bes = bes + 1; }

// Getters
int Flight::get_flightNo() { return this->flightNo; }
string Flight::get_departure() { return this->departure; }
string Flight::get_destination() { return this->destination; }
string Flight::get_date() { return this->date; }
string Flight::get_time() { return this->time; }
int Flight::get_nfs() { return this->nfs; }
int Flight::get_bfs() { return this->bfs; }
int Flight::get_nbs() { return this->nbs; }
int Flight::get_bbs() { return this->bbs; }
int Flight::get_nes() { return this->nes; }
int Flight::get_bes() { return this->bes; }
