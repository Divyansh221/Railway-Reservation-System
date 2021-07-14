# Software Engineering Course Project

## Assignment 3: Inheritance Hierarchy, Design, Analysis & Testing

In this assignment we develop a rudimentary railway reservation / booking system (somewhat like IRCTC Train Ticket Booking, but extremely scaled down in features). This is implemented via an Object Oriented C++ programme which is broken into numerous files.

The main folder contains 3 parts:

1. Documents.zip
		a. Design.txt:  The design document stating the design details 
		with principles and guidelines followed
		b. TestPlan.txt: The testplan document stating scenarios for unit tests and the test application.

2. Source.zip
		a. Implementation :
			I.	 Station.h and Station.cpp:
					Class Station is implemented.
					The .h file contains the application part and .cpp file contains the implementation part to create and use Station Class.
			II.	 Date.h and Date.cpp:
					Class Date is implemented. 
					The .h file contains the application part and .cpp file contains the implementation part to create and use Date Class.
			III. Passenger.h and Passenger.cpp:
					Class Passenger is implemented.
					The .h file contains the application part and .cpp file contains the implementation part to create and use Passenger Class.
			IV.	 Railways.h and Railways.cpp:
					Singleton class Railways is implemented. 
					The .h file contains the application part and .cpp file contains the implementation part to create and use Railways Class.
			V.	 BookingClass.h and BookingCLass.cpp:
					All Booking Classes are implemented in a hierarchy. Abstract Base class BookingClass (base class),
					Seat, Berth are second level of hierarchy;
					Tier0, Tier2, Tier3 are second level of hierarchy;
					These are made for implementation. 
					Various concrete classes are formed of these such as ACChairCar, Sleeper etc, both .cpp and .h files containing implementation necessary.
					The .h file contains the application part and .cpp file contains the implementation part to create and use repective classes.
			VI.	 Booking.h and Booking.cpp:
					Class Booking is implemented. 
					The .h file contains the application part and .cpp file contains the implementation part to create and use Booking Class.
		b. TestApplication
			I. 	 UnitTesting.cpp
			II.  TestApplication.cpp
			III. MyTestApplication.cpp

3. Outputs.zip
		a. UnitTesting.txt: The output of the unit tests.
		b. TestApplication.txt: The output of the test application given in the assignment for booking class.
		c. MyTestApplication.txt: The output of the extra test application designed for further testing.

Compiler used: g++ (Apple clang version 12.0.0 (clang-1200.0.32.29))
COmmands used to get Output txt files:
	1. UnitTesting: g++ -std=c++11 UnitTesting.cpp Booking.cpp AC3Tier.cpp Date.cpp Railways.cpp Station.cpp AC2Tier.cpp ACFirstClass.cpp FirstClass.cpp ACChairCar.cpp Sleeper.cpp SecondSitting.cpp Passenger.cpp
	2. TestApplication: g++ -std=c++11 TestApplication.cpp Booking.cpp AC3Tier.cpp Date.cpp Railways.cpp Station.cpp AC2Tier.cpp ACFirstClass.cpp FirstClass.cpp ACChairCar.cpp Sleeper.cpp SecondSitting.cpp Passenger.cpp
	3. MyTestApplication: g++ -std=c++11 MyTestApplication.cpp Booking.cpp AC3Tier.cpp Date.cpp Railways.cpp Station.cpp AC2Tier.cpp ACFirstClass.cpp FirstClass.cpp ACChairCar.cpp Sleeper.cpp SecondSitting.cpp Passenger.cpp

*Additional information is provided in the .h files in Implementation section as comments*

Divyansh Bhatia