#pragma once
#include <iostream>
using namespace std;
class Developer {
public:
	int* age;/* You must keep the age member as a pointer. You CANNOT change it /o\ */
public:
	Developer(int age);
	Developer(Developer& rhs);
	int getAge();
	void setAge(int age);
	~Developer();
};
