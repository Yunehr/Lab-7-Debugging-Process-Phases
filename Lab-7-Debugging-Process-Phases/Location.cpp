#include"Location.h"
#include<iostream>

Location::Location(int latitude, double longitude) {
	cout << "Created Location object" << endl;
	this->latitude = latitude;		//canged "= longitude" to "= latitude"
	this->longitude = longitude;	//canged "= latitude" to "= longitude"

}

int Location::getLatitude() {

	return latitude;	//changed longitude to latitude

}

int Location::getLongitude() {

	return longitude;

}

void Location::setLatitude(double latitude) {

	this->latitude = latitude;	//changed "this->longitude" to "this->latitude" to change correct value in location
}

void Location::setLongitude(double longitude) {

	this->longitude = longitude;	//removed unnecssary duplicate line of code

}

// **********************************************************************************************
// Though the distance between two locations should be calculated using the Haversine formula, 
// in our requirements we **accept** the simple distance calculation 
// based on the formula found in  https://www.cuemath.com/geometry/distance-between-two-points/
// **********************************************************************************************
double Location::distanceFrom(Location& location) {

	return sqrt(pow(location.latitude - this->latitude, 2) + pow(location.longitude - this->longitude, 2)); //changed to reflect documented calculation

}


//global function added through debugging to allow << operation
std::ostream& operator << (std::ostream& cout, Location& l) {
	cout << "Given Location Lat/Long: (" << l.latitude << ", " << l.longitude << ")";

	return cout;
}
