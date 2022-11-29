# TicketManager

This program takes two .csv files as arguments.
The first is a file containing flights, the second is a file containing bookings.
The program reads through these files, and if it finds a matching booking for a flight, it will create a ticket.
If a plane is left empty, it will be cancelled. The flightnumber of the cancelled flight will be printed in a report.

Launch the program by typing ./flightmanager flights.csv bookings.csv

(I added a makefile but im not sure i did it correctly..)
