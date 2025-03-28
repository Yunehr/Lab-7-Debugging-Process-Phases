#pragma once
#include<iostream>
using namespace std;
class CanNotDivideByZero :public exception
{
	const char* what() const;
};

