/*
Name:       Jason DuBois
Class:      CSCI 271-5291 Problem Solving and Programming 1
Due:        14-Oct-2014 @ 11:59 PM
Assignment: 4, Chap 5 prob 13 (page 330)
Created:    12-Oct-2014
Purpose:	This program gets from the user the population of two towns
            (A and B) and the growth rate for both towns.  This program
			then outputs the number of years when population A will be
			greater than or equal to population B and the populations
			for both towns after said amount of years.

Assumptions:
(1) User will enter an integer value for populations
(2) User will enter the growth rate as a decimal value less than
    or equal to 1 and greater than or equal to 0
(3) User will in fact enter for population B a number
    that is greater than population A and for growth
	B a number that is less than growth A
(3) Growth rate is annual

Design:
The population for both towns after one year will be the respective population
multiplied by the respective growth rate added to the respective (original)
population.  The program will continue with this calculation until at which
time (years) the population of town A is greater than or equal to the population
of town B.
*/

// include statements
#include <iostream>
#include <string>
#include <iomanip>

// namespace
using namespace std;

// main declaration
int main()
{
	// declare variables
	int popTownA = 0;
	int popTownB = 0;
	double growthTownA = 0;
	double growthTownB = 0;
	int years = 0;
	string comparison = "";

	// input
	cout << "Please enter the population for town A: ";
	cin >> popTownA;

	cout << "Please enter the population for town B: ";
	cin >> popTownB;

	cout << "Please enter the population growth rate for town A: ";
	cin >> growthTownA;

	cout << "Please enter the population growth rate for town B: ";
	cin >> growthTownB;

	// process
	/* while the population of town A is less than the population
	   of town B keep adding pop times growth rate to the respective
	   populations

	   first calculate population for each town after 1 year of growth
	   and given my assumption in #3, I decided to use a do-while loop
	*/
	do
	{
		popTownA += popTownA * growthTownA;
		popTownB += popTownB * growthTownB;
		++years; // increment the year by 1 each time loop iterates
	} while (popTownA < popTownB);

	// for output if pop A is equal to popB use 'equal to' otherwise use 'greater than'
	if (popTownA == popTownB)
	{
		comparison = " equal to ";
	}
	else
	{
		comparison = " greater than ";
	}

	// output
	cout << endl;
	cout << "******************************************" << endl << endl;
	cout << "In " << years << " year(s) the population of town A "
		<< "will be" << comparison << "the population of town B." << endl << endl;
	cout << "In " << years << " year(s) the population of town A will be: " << popTownA << endl << endl;
	cout << "In " << years << " year(s) the population of town B will be: " << popTownB << endl << endl;
	//cout << endl;
	cout << "******************************************" << endl;

	// return statement
	return 0;
} // end main
