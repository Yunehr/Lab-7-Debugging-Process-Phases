#pragma once
#include <iostream>
using namespace std;
class Location {
public:
	double latitude;
	double longitude;
public:
	Location(int latitude, double longitude);
	int getLatitude();
	int getLongitude();
	void setLatitude(int age);
	void setLongitude(int age);
	double distanceFrom(Location& location);

	friend std::ostream& operator << (std::ostream& cout, Location& s);	//need this to allow << operator use on location class
};

