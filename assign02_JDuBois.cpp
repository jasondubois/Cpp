/*
Name:       Jason DuBois
Class:      CSCI 271-5291 Problem Solving and Programming 1
Due:        14-Sep-2014
Assignment: 2, Chap 2 prob 6 (page 116)
Created:    11-Sep-2014
Purpose:	This program accepts user input (name and study hours)
            and then displays to the user his/her name and how many
			hours he/she should study for the exam
*/

// include statements
#include <iostream>
#include <string>

// namespace
using namespace std;

int main()
{
	// declare variables
	string name;
	double studyHours;

	// prompt user for input
	cout << "Please enter your name: ";
	cin >> name;
	cout << endl;

	cout << "Please enter hours to study: ";
	cin >> studyHours;
	cout << endl;

	// output to user
	cout << "Hello " << name << "!  On Saturday, you need to study "
		 << studyHours << " hours for the exam." << endl;

	// return statement
	return 0;
}



