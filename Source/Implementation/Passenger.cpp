#include "Passenger.h"

char genderNames[][10] = { "Male", "Female"};
char categoriesNames[][20] = { "General", "Ladies", "Senior Citizen",
								 "Divyaang", "Tatkal", "Premium Tatkal"};

Passenger :: Passenger(string name, string aadhaar, string mobile, 
							Gender gender, Category category, Date dateOfBirth):
	name_(name),
	aadhaar_(aadhaar),
	mobile_(mobile),
	gender_((Gender) gender),
	category_((Category) category),
	dateOfBirth_(dateOfBirth)
{}

Passenger :: Passenger(const Passenger &p):
	name_(p.name_),
	aadhaar_(p.aadhaar_),
	mobile_(p.mobile_),
	gender_((Gender) p.gender_),
	category_((Category) p.category_),
	dateOfBirth_(p.dateOfBirth_)
{}

Passenger :: ~Passenger(){}

Passenger& Passenger :: operator=(const Passenger &p){
	if(this != &p){
        name_ = p.name_;
		aadhaar_ = p.aadhaar_;
		mobile_ = p.mobile_;
		gender_ = p.gender_;
		category_ = p.category_;
		dateOfBirth_ = Date(p.dateOfBirth_);
    }
    return *this;
}

string Passenger :: GetName() const{
	return (name_);
}

void Passenger :: PrintInfo() const{
	cout<<"Info of Passenger : "<<endl;
	cout<<"Name : "<<name_<<endl;
	cout<<"aadhaar number : "<<aadhaar_<<endl;
	cout<<"Mobile number : "<<mobile_<<endl;
	cout<<"Gender of Passenger : "<<genderNames[gender_ - 1]<<endl;
	cout<<"Category of Passenger : "<<categoriesNames[category_ - 1]<<endl;
	cout<<"Date of Birth : "<<dateOfBirth_<<endl;
}

ostream& operator<<(ostream& os, const Passenger& p){
	cout<<p.name_<<endl;
	cout<<p.aadhaar_<<endl;
	cout<<p.mobile_<<endl;
	cout<<genderNames[p.gender_ - 1]<<endl;
	cout<<categoriesNames[p.category_ - 1]<<endl;
	cout<<p.dateOfBirth_<<endl;
	return os;
}

void Passenger :: TestPassenger(){
	cout<<" +++++ Testing Passenger class +++++ "<<endl;
	Gender g = Male;
	Category c = General;
	Passenger p("Divyansh Bhatia", "19CS10027", "7076120333", g, c, Date(30, 10, 2001));
	Passenger q;
	q.PrintInfo();
	cout<<"Testing GetName : "<<endl;
	if(p.GetName() == "Divyansh Bhatia") cout<<"Passenger Class member GetName working properly."<<endl;
	else cout<<"Passenger Class member GetName not working properly."<<endl;
	cout<<" +++++ Passenger class is working properly +++++ "<<endl;
	cout<<endl;
}