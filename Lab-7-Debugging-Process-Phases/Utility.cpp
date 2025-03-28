#include "Utility.h"
#include"CanNotDivideByZero.h"

vector<Location>  scale(vector<Location> locations, double s)
{
	vector<Location> scaledLocations;
	double latitude;
	double longitude;
	if (s != 0) {
		for (int i = 0; i < locations.size(); i++) {
			latitude = locations[i].getLatitude() / s;   // You must keep this operation (/). Do not change  this (/) opertion 
			longitude = locations[i].getLongitude() / s; // You must keep this operation (/). Do not change  this (/) opertion 

			scaledLocations[i].setLatitude(latitude);
			scaledLocations[i].setLongitude(longitude);
		}
	}
	else
	{

		throw CanNotDivideByZero();
	}

	return scaledLocations;
}
