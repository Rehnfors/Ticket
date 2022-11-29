#include <iostream>
#include "BookingManager.hh"
#include "Bookings.hh"

using namespace std;

BookingManager::BookingManager() {}

void BookingManager::read_bookings(string filename)
{
    ifstream file(filename);
    string line;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream stream(line);
            Booking *b = new Booking;
            string word;

            getline(stream, word, ',');
            b->set_bookingNo(atoi(word.c_str()));
            getline(stream, word, ',');
            b->set_date(word);
            getline(stream, word, ',');
            b->set_time(word);
            getline(stream, word, ',');
            b->set_departure(word);
            getline(stream, word, ',');
            b->set_destination(word);
            getline(stream, word, ',');
            b->set_seatClass(word);
            getline(stream, word, ',');
            b->set_fName(word);
            getline(stream, word, ',');
            b->set_lName(word);

            this->Bookings.push_back(b);
        }
    }
    file.close();
}
/**
 * @brief show_booking iterates through the list of bookings and prints the Booking number from each booking.
 * For testing purposes.
 * @param Bookings
 */
void BookingManager::show_bookings(list<Booking *> Bookings)
{
    list<Booking *>::iterator b;

    for (b = Bookings.begin(); b != Bookings.end(); ++b)
    {
        cout << "BookingNo: " << (*b)->get_bookingNo() << endl;
    }
}
/**
 * @brief Get the bookings object
 * @return list<Booking *>
 */
list<Booking *> BookingManager::get_bookings()
{
    return Bookings;
}
