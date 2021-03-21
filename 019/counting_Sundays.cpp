/* You are given the following information, but you may prefer to do some research for yourself.

1 Jan 1900 was a Monday.
Thirty days has September,
April, June and November.
All the rest have thirty-one,
Saving February alone,
Which has twenty-eight, rain or shine.
And on leap years, twenty-nine.
A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)? */

#include<iostream>
#include<vector>
using namespace std;

int main() {

	int dayCounter = 0;
	
	// loop finds number of days in the 20th century
	for(int i = 1901; i <= 2000; i++) {
		dayCounter += 365;
		if(i % 4 == 0) {
			dayCounter += 1; // checks and adds one for leap year
		}
	}
	
	int monthCounter = 1;
	int sundayCounter = 0;
	int day = 365 % 7; // initialise counter with day on 1 Jan 1901

	// loop through each day and add to counter when Sunday falls on first month
	for(int i = 1; i < dayCounter; i++) {
		// check if it has turned over onto a new year 
		if(monthCounter == 13) { 
			monthCounter = 1;
		}
		
		// if statements to check which month and add on associated number of days. This saves the need to go through each day individually in loop
		// adds one less day to i as i will also increment with each loop
		if(monthCounter == 1 || monthCounter == 3 || monthCounter == 5 || monthCounter == 7 || monthCounter == 8 || monthCounter == 10 || monthCounter == 12) {
			i += 30;
			day += 30;
			monthCounter++;
		}
		else if(monthCounter == 4 || monthCounter == 6 || monthCounter == 9 || monthCounter == 11) {
			i += 29;
			day += 29;
			monthCounter++;
		}
		else if(monthCounter == 2) {
			monthCounter++;
			//check for leap years
			if(i % 4 != 0) {
				i += 27;
				day += 27;
			}
			else {
				i += 28;
				day += 28;
			}
		}
		
		// check if first day of month is a Sunday
		if(day % 7 == 0) {
			sundayCounter++;
			day == 1; // reset starting day to Monday for next loop
		}
		else {
			day = day % 7; // reset starting day for next loop 
		}		
	}
	
	cout << sundayCounter << "\n";

}
