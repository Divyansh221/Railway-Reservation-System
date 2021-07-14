#ifndef DATE_H
#define DATE_H

#include<iostream>
using namespace std;

// Date class for any valid date in dd/MMM/yy format

class Date {
    enum Month { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
    enum Day { Mon, Tue, Wed, Thr, Fri, Sat, Sun };              // 2 enum classes for Month and Day names
    typedef unsigned int UINT;
    UINT date_; Month month_; UINT year_;       // 3 unsigned integers for date, month and year
public:
    Date(UINT d = 1, UINT m = 1, UINT y = 2021);        // Default constructor
    Date(const Date &d);        // Copy constructor
    ~Date();        // Destructor
    int GetDate();      // Returns the date
    void Print() const;     // Prints the date
    bool IsValidDate();     // Checks whether the date is valid or not 
    Date& operator=(const Date& d);       // Takes a constant Date reference as argument and assign the new value to current Date (same as Date passed in arguments)
    friend ostream& operator<<(ostream& os, const Date& d);         // Prints the construced date in different style than Print
    static void TestDate();         // Provides scenarios for unit testing
};

#endif