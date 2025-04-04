#include"Location.h"
#include"Developer.h"
#include<vector>
#include"Utility.h"
#include<iostream>
using namespace std;

/*
		  .--.           .--.
			  \         /
		\      `\_\o/_/`     /
		 \    .-'O . O`-.   /
		 |  .'_________`.  |
		  \.'^    Y    ^`./
		 .'       |       `.
		.         |         .
	   .          |          .
	   .          |          .
	   .          |          .
	   .          |          .
	 __.          |          .__
	/.--.         |         .--.\
 __//'   `.       |       .'   `\\___
`--'      /`:     |     .'\     `--'
		  |  `-.__|__.-'   |
		  |                |
		  /                \
		 /                  \
*/




int main() {
	Developer developer1(15);
	Developer developer2 = developer1;
	developer1.setAge(31);
	cout << "developer2.getAge() : " << developer2.getAge() << endl;	//develper2 was printing incorrect value referencing shallow copy

	Location locationA(8, 10);
	Location locationB(3, 3);
	double distanceBetweenAandB = locationA.distanceFrom(locationB);
	cout << "The distance between A and B = " << distanceBetweenAandB << endl;
	vector < Location> locations;
	locations.push_back(locationA);
	locations.push_back(locationB);
	int s;
	cout << "Enter the scaling factor s : ";
	cin >> s;
	try {
		scale(locations, s);	//if we are printing the scaled locations we need to store the returned location vectors review Debugging report error # 7 
	}
	catch (std::exception& e) {
		cout << e.what() << endl;
	}

	for (Location location : locations) {	//are we printing the locations or scaled locations (too ambiguous so did not change)
		cout << location << endl;		//fixed  << overload bug
	}
	return 0;
}