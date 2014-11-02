/*
Name:       Jason DuBois
Class:      CSCI 271-5291 Problem Solving and Programming 1
Due:        07-Oct-2014 @ 11:59 PM
Assignment: 3, Chap 4 prob 7 (page 253)
Created:    04-Oct-2014
Purpose:	This program accepts from the user (1) total number of cookies
			(2) number of cookies in a box (3) number of cookie boxes in a container.
			This program displays to the user (1) number of boxes (each with the specified
			number of cookies) and (2) number of containers to ship (each with the specified
			number of boxes).  It also displays the number of leftover cookies and number of
			leftover boxes.
Assumptions: 
			(1) User will enter an integer value of 1 or greater for number of cookies
			(2) No fraction (e.g., half a cookie) of a cookie or negative values will
			    be entered by user
			(3) User will enter 24 for number of cookies in a box
			(4) User will enter 75 for number of boxes in a container
			(5) ... but program will work if user does not comply with 3 or 4
			    providing entry of 3 and 4 are whole numbers > 0
			(6) Only full containers will be shipped

Design:
			Number of cookies in a box multiplied by number of boxes in a container will yield
			the minimum number of cookies needed to fill at least one container.  If that minimum
			is not met, then check number of cookies against number of cookies per box.  If number
			of cookies is less than the number of cookies per box, output only number of leftover
			cookies.  Otherwise, output number of leftover boxes and (if any) number of leftover
			cookies.

			If number of cookies is enough to fill at least one container, then check for leftover
			boxes.  If none, output number of containers to ship.  If there are leftover boxes,
			then output number of containers to ship, number of leftover boxes,
			and (if any) number of left over cookies.
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
	int intCookies = 0;
	int intBoxes = 0;
	int intContainers = 0;
	int intCookiesPerBox = 0;
	int intBoxesPerContainer = 0;
	int intLeftoverCookies = 0;
	int intLeftoverBoxes = 0;

	// input from user
	cout << "Please enter the number of cookies (whole number > 0): " << endl;
	cin >> intCookies;
	cout << endl;

	cout << "Please enter the number of cookies in a box (whole number > 0): " << endl;
	cin >> intCookiesPerBox;
	cout << endl;

	cout << "Please enter the number of boxes in a container (whole number > 0): " << endl;
	cin >> intBoxesPerContainer;
	cout << endl;

	cout << "********************************" << endl << endl; // for formatting output
	
	// process
	intLeftoverCookies = intCookies % intCookiesPerBox;
	intBoxes = intCookies / intCookiesPerBox;

	intLeftoverBoxes = intBoxes % intBoxesPerContainer;
	intContainers = intBoxes / intBoxesPerContainer;

	// output
	// if the number of cookies entered does not meet the minimum needed to fill at
	// least one container, then you won't have a full container
	if (intCookies < (intCookiesPerBox * intBoxesPerContainer))
	{
		// if the number of cookies does not meet the minimum needed to fill a box
		// then you won't have a full box
		if (intCookies < intCookiesPerBox)
		{
			cout << "There are no full containers, no full boxes, and " << intCookies
				<< " leftover cookies." << endl << endl;
		}
		else
		{
			// minimum to meet at least one full box fullfilled, so output is number
			// of leftover boxes and number of leftover cookies (if any)
			cout << "There are no full containers, " << intBoxes << " leftover full box(es), and " 
				<< intLeftoverCookies << " leftover cookie(s)." << endl << endl;
		}
	}
	else
	{
		// minimum to meet at least one full container fullfilled, so check if there
		// are leftover boxes; if none, then ship full containers
		if (intLeftoverBoxes == 0)
		{
			cout << "Ship " << intContainers << " full container(s).  There are "
				<< "no leftover boxes and " << "no leftover cookies."
				<< endl << endl;
		}
		else
		{
			// otherwise ship full containers, and display (discard) leftover boxes
			// and leftover cookies (if any)
			cout << "Ship " << intContainers << " full container(s).  There is/are "
				<< intLeftoverBoxes << " leftover full box(es) and "
				<< intLeftoverCookies << " leftover cookie(s)." << endl << endl;
		}
	}
	
	cout << "********************************" << endl << endl; // for formatting output

	return 0;
} // end main