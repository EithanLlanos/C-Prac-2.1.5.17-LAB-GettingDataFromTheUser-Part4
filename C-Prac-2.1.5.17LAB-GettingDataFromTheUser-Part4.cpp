//Scenario
//Write a program that prints the name of a given day of the week.Your program must print the same result as the expected output.This task is similar to the previous lab, but this time you have to get the day of the week from the user and validate the input.
//Test the program for all the days of the week(add code to print a message to the user when he / she enters an invalid day of the week).
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Sample Input
//1
//
//Sample output
//The day of week is : Monday
//
//Sample Input
//2
//
//Sample output
//The day of week is : Tuesday
//
//Sample Input
//9
//
//Sample output
//There is no such day : 9. Input value must be from 0 to 6.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
int main() {
	int d;
	char day[10];
	printf("Enter the day of the week: ");
	scanf_s("%d", &d);
	if (d == 1) strcpy_s(day, "Monday");
	else if (d == 2) strcpy_s(day, "Tuesday");
	else if (d == 3) strcpy_s(day, "Wednesday");
	else if (d == 4) strcpy_s(day, "Thursday");
	else if (d == 5) strcpy_s(day, "Friday");
	else if (d == 6) strcpy_s(day, "Saturday");
	else if (d == 0) strcpy_s(day, "Sunday");

	if (d < 0 || d>6) printf("There is no such day %d. Input value must be from 0 to 6", d);
	else printf("The day of the week is: %s", day);
	return 0;
}