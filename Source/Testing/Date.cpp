#include "Date.h"

char monthNames[][4] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
"Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
char dayNames[][10] = { "Monday", "Tuesday", "Wednesday", "Thursday",
"Friday", "Saturday", "Sunday" };


Date :: Date(UINT d, UINT m, UINT y) : date_(d), month_((Month)m), year_(y)
{}

Date :: Date(const Date &d) : date_(d.date_), month_((Month)d.month_), year_(d.year_)
{}

Date :: ~Date(){};

int Date :: GetDate(){
	return date_;
}

void Date :: Print () const{ 
    cout << date_ << "/" << monthNames[month_ - 1] << "/" << year_ << endl; 
}

bool Date :: IsValidDate(){
    if((date_ >= 1 && date_ <= 31) && (month_ >= 1 && month_ <= 12) && (year_ >= 1)) return true; 
    else return false;
}

Date& Date :: operator=(const Date& d){
    date_ = d.date_;
    month_ = d.month_;
    year_ = d.year_;
    return *this;
}

ostream& operator<<(ostream& os, const Date& d){
    os<<"Date : "<<d.date_<<"/"<<d.month_<<"/"<<d.year_;
    return os;
}

void Date :: TestDate(){
	cout<<" +++++ Testing Date class +++++ "<<endl;
	Date d1(15, 2, 2021);
	cout<<"Testing GetDay : "<<endl;
	if(d1.GetDate() == 15) cout<<"Date Class member GetDate working correctly."<<endl;
	else cout<<"Date Class member GetDate not working correctly."<<endl;
	cout<<"Testing IsValidDate : "<<endl;
	if(d1.IsValidDate() == true) cout<<"Date is valid!"<<endl;
	if(!d1.IsValidDate() == false) cout<<"Date is invalid!"<<endl;
	Date d2;
	cout<<"d2 : (Default constructor check) ";
	d2.Print();
	d2 = d1;
	cout<<"d2 : (Copy assignment operator working check) ";
	d2.Print();
	cout<<" +++++ Date class is working properly +++++ "<<endl;
	cout<<endl;
}