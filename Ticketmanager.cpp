#include <iostream>
#include <iterator>
#include <cstdlib>
#include <list>
#include <fstream>
#include <sstream>
#include <string>
#include "Ticketmanager.hh"

using namespace std;

TicketManager::TicketManager(){}

    void TicketManager::get_seat(list<Flight *> Flights, list<Booking *> Bookings)
    {
        list<Flight *>::iterator f;
        list<Booking *>::iterator b;
        for (b = Bookings.begin(); b != Bookings.end(); ++b)
        {
            for (f = Flights.begin(); f != Flights.end(); ++f)
            {
                if ((*f)->get_date() == (*b)->get_date() && (*f)->get_time() == (*b)->get_time() &&
                    (*f)->get_departure() == (*b)->get_departure() && (*f)->get_destination() == (*b)->get_destination())
                {
                    int seatNumber = 0;
                    int rowNumber = 0;

                    if ((*b)->get_seatClass() == "first")
                    {
                        (*f)->increase_bfs();
                        seatNumber = (*f)->get_bfs();
                        rowNumber = seatNumber / 7 + 1;
                    }
                    if ((*b)->get_seatClass() == "business")
                    {
                        (*f)->increase_bbs();
                        seatNumber = (*f)->get_nfs() + (*f)->get_bbs();
                        rowNumber = seatNumber / 7 + 1;
                    }
                    if ((*b)->get_seatClass() == "economy")
                    {
                        (*f)->increase_bes();
                        seatNumber = (*f)->get_nfs() + (*f)->get_nbs() + (*f)->get_bes();
                        rowNumber = seatNumber / 7 + 1;
                    }

                    char filename[20];
                    sprintf(filename, "Ticket-{%d}", (*b)->get_bookingNo());
                    ofstream outfile(filename);

                    if (outfile.is_open())
                    {
                        outfile << "BOOKING: " << (*b)->get_bookingNo() << endl;
                        outfile << "FLIGHT: " << (*f)->get_flightNo() << " DEPARTURE: " << (*f)->get_departure() << " DESTINATION: ";
                        outfile << (*f)->get_destination() << " DATE: " << (*f)->get_date() << " TIME: " << (*f)->get_time() << endl;
                        outfile << "PASSENGER: " << (*b)->get_fName() << " " << (*b)->get_lName() << endl;
                        outfile << "CLASS: " << (*b)->get_seatClass() << endl;
                        outfile << "ROW: " << rowNumber << " "
                                << "SEAT: " << seatNumber << endl;
                    }
                    outfile.close();
                }
            }
        }
    }
