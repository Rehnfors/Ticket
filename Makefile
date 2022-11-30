all: 
	g++ main.cpp Flights.cpp Bookings.cpp FlightManager.cpp BookingManager.cpp Ticketmanager.cpp -o Ticketmanager
  
run:
	./Ticketmanager flights.csv bookings.csv
