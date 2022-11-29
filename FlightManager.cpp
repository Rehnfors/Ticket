#include <iostream>
#include "FlightManager.hh"
#include "Flights.hh"

using namespace std;

/**
 * @brief FlightManager reads flights from a file and stores each line of the file
 * in a list, as a flight.
 */

FlightManager::FlightManager() {}

void FlightManager::read_flights(string filename)
{
    ifstream file(filename);
    string line;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream stream(line);
            Flight *f = new Flight;
            string word;

            getline(stream, word, ',');
            f->set_flightNo(atoi(word.c_str()));
            getline(stream, word, ',');
            f->set_departure(word);
            getline(stream, word, ',');
            f->set_destination(word);
            getline(stream, word, ',');
            f->set_date(word);
            getline(stream, word, ',');
            f->set_time(word);
            getline(stream, word, ',');
            f->set_nfs(atoi(word.c_str()));
            getline(stream, word, ',');
            f->set_nbs(atoi(word.c_str()));
            getline(stream, word, ',');
            f->set_nes(atoi(word.c_str()));

            this->Flights.push_back(f);
        }
    }
    file.close();
}
/**
 * @brief show_flights iterates through the "Flights"-list and prints each flightnumber from it.
 * For testing purposes.
 * @param Flights
 */
void FlightManager::show_flights(list<Flight *> Flights)
{
    list<Flight *>::iterator f;

    for (f = Flights.begin(); f != Flights.end(); ++f)
    {
        cout << "FlightNo: " << (*f)->get_flightNo() << endl;
    }
}

/**
 * @brief Get the flights object
 *
 * @return list<Flight *>
 */
list<Flight *> FlightManager::get_flights()
{
    return Flights;
}
