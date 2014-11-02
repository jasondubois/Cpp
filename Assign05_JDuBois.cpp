/*
Name:       Jason DuBois
Class:      CSCI 271-5291 Problem Solving and Programming 1
Due:        ??-Oct-2014 @ 11:59 PM
Assignment: 5, Chap 6 prob 12 (page 440)
Created:    20-Oct-2014
Purpose:	This program gets from the user the hourly rate
and consulting time for tax services.  It also gets from the
user whether or not the person seeking tax services has low
(<= 25 K) income.  The program computes and displays the 
billing amount for said tax services.

Assumptions:
(1) User will enter valid numerical types for hourly rate and
    consulting time
(2) User will enter yes or no when prompted about low income
(3) User will enter consulting time in minutes (e.g., 1 hour
    30 minutes is entered as 90 minutes)

Design:
I need to first determine if person has low income. If they do
and if consulting time is less than or equal to 30 minutes, then
consulation is free.  Otherwise charge 40% of the hourly rate less
the first 30 minutes.

If they do not qualify for low income status, then consulation is free
if the consulting time is less than or equal to 20 minutes.  Otherwise,
charge 70% of the hourly rate less the first 20 minutes.

I need to use one function that takes as input hourly rate, total
consulting time, and whether or not the person has low income. This
function will return the billing amount.
*/

// include statements
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

// namespace
using namespace std;

// function prototypes
double billingAmount(double hourlyRate, int consultingTime, bool lowIncome);

// main declaration
int main()
{
	// declare and initialize variables
	int consultingTime = 0; // as minutes
	double hourlyRate = 0.0; // as dollars.cents
	char incomeLow = ' '; // user will enter yes or no
	bool lowIncome = false;

	// input
	cout << "Please enter the hourly rate (in US dollars) for tax consulting: ";
	cin >> hourlyRate;
	cout << endl;
	cout << "Please enter the total consulting time (in minutes): ";
	cin >> consultingTime;
	cout << endl;
	cout << "Is your income less than or equal to $25,000 per year (yes/no): ";
	cin >> incomeLow;
	cin.ignore(5, '\n');  // only get first character in (y)es or (n)o

	// lowIncome will be true (or 1) when incomeLow = y(es)
	lowIncome = static_cast<char>(toupper(incomeLow)) == 'Y';

	cout << endl << " ***************************** " << endl << endl;  // line spaces

	// format output to show 2 decimal places even with 0s
	cout << fixed << showpoint;
	cout << setprecision(2);

	// output to user
	cout << "The amount you owe for tax services is $"
		<< billingAmount(hourlyRate, consultingTime, lowIncome) << "." << endl << endl;

	// return statement
	return 0;
} // end main


double billingAmount(double rate, int time, bool income)
{
	// declare and initialize variable
	double billing = 0.0;
	const double HOUR_CONVERT = 60.0; // convert minutes to hours and keep result as double

	// check whether low income or not
	if (income)
	{
		// check time of consulting
		if (time <= 30)
		{
			billing = 0;
		}
		else
		{
			billing = 0.40 * rate * ((time - 30) / HOUR_CONVERT);
		}
	}
	else
	{
		// check time of consulting
		if (time <= 20)
		{
			billing = 0;
		}
		else
		{
			billing = 0.70 * rate * ((time - 20) / HOUR_CONVERT);
		}
	}
	
	// return billing amount
	return billing;
} // end billingAmount










//double billingCalc(double hourlyRate, double percent, int consultingTime)
//{
//	// Calculates billing rate by way of the following formula
//	// percent * hourly rate * (consulting time - x / 60)
//	// where x is some constant
//
//	//return hourlyRate * percent * ()
//	return 0;
//}

