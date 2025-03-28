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
	void setLatitude(double latitude);
	void setLongitude(double longitude);
	double distanceFrom(Location& location);

	friend std::ostream& operator << (std::ostream& cout, Location& s);	//need this to allow << operator use on location class
};

