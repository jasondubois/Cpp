/*
Name:       Jason DuBois
Class:      CSCI 271-5291 Problem Solving and Programming 1
Due:        ??-Nov-2014 @ 11:59 PM
Assignment: 6, Chap 10 prob 2 (page 703)
Created:    02-Nov-2014
Purpose:    Herein is the implementation file for Temporary class

*/

// include statements
#include <iostream>
#include <string>
#include <cmath>
#include "Temporary.h"

// namespace
using namespace std;

// global variable
const double PI = 3.1416;

// 12a page 698
void Temporary::set(string newDescription, double newNum1, double newNum2)
{
	description = newDescription;
	first = newNum1;
	second = newNum2;
}

// 12b page 699
double Temporary::manipulate()
{
	if (description == "rectangle")
	{
		return first * second;
	}
	else if (description == "circle"){
		return PI * pow(first, 2);
	}
	else if (description == "sphere"){
		return (4 / 3) * PI * pow(first, 3);
	}
	else if (description == "cylinder"){
		return PI * pow(first, 2) * second;
	}
	else
	{
		return -1;
	}
}

// 12c page 699
void Temporary::print()
{
	if (description == "rectangle")
	{
		cout << "rectangle: length = ", first, ", width = ",
			second, ", area = ", manipulate();
	}
	else if (description == "circle"){
		cout << "circle: radius = ", first, ", area = ", manipulate();
	}
	else if (description == "sphere"){
		cout << "sphere: radius = ", first, ", volume = ", manipulate();
	}
	else if (description == "cylinder"){
		cout << "cylinder: radius = ", first, ", height = ",
			second, ", volume = ", manipulate();
	}
	else
	{
		cout << description, ": dimension 1 = ", first,
			", dimension 2 = ", second, ", size = ", manipulate();
	}
}

// 12d page 699
Temporary::Temporary(string newDescription, double newNum1, double newNum2)
{
	set(newDescription, newNum1, newNum2);
}

// 12e page 699

void Temporary::get(string& newDescription, double& newNum1, double& newNum2)
{
	newDescription = description;
	newNum1 = first;
	newNum2 = second;
}

string Temporary::getDescription() const
{
	return description;
}

double Temporary::getFirst() const
{
	return first;
}

double Temporary::getSecond() const
{
	return second;
}

void Temporary::setDescription(string newDescription)
{
	description = newDescription;
}

void Temporary::setFirst(double newNum1)
{
	first = newNum1;
}

void Temporary::setSecond(double newNum2)
{
	second = newNum2;
}

/*
Left off here 02-Nov-2014 @ 1122
Need to organize above according to accessor, mutator, constructor
Then need to complete remainder of assignment with another .cpp file
with main() function
*/