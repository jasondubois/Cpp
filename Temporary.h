/*
Name:       Jason DuBois
Class:      CSCI 271-5291 Problem Solving and Programming 1
Due:        ??-Nov-2014 @ 11:59 PM
Assignment: 6, Chap 10 prob 2 (page 703)
Created:    02-Nov-2014
Purpose:    Herein is the header file for Temporary class

*/

// include statements
#include <iostream>
#include <string>

// namespace
using namespace std;

class Temporary
{
public:
	// accessor
	void get(string&, double&, double&);
	string getDescription() const;
	double getFirst() const;
	double getSecond() const;

	// mutator
	void set(string, double, double);
	void setDescription(string);
	void setFirst(double);
	void setSecond(double);

	// constructor
	Temporary(string = "", double = 0.0, double = 0.0);

	// other functions
	void print();
	double manipulate();

private:
	string description;
	double first;
	double second;
}; // end Temporary class