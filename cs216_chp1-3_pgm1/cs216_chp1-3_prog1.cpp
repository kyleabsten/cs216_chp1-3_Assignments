/*
Programmer Name: Kyle Absten
Date: 02/20/2020
Description:  This is the first program for the Chapter 1-3 Assignments for cs216.

This program will ask the user for input to get values for the number of hours worked 
and the hourly rate of pay.  It will then calculate and display the users income before and,
after taxes, the money spent on clothes and other accessories, the money spent on school supplies, 
the money spent to buy savings bonds, and the money spent by the parents to buy savings bonds.
This info will then be printed to the console.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Declaring needed variables
	double hourlyPayRate, //A double to store the per hour pay rate
		week1Hours,  // A double to store the hours worked for week 1
		week2Hours,  // A double to store the hours worked for week 2
		week3Hours,  // A double to store the hours worked for week 3
		week4Hours,  // A double to store the hours worked for week 4
		week5Hours,  // A double to store the hours worked for week 5
		hoursPerWeek, //A double to store hours worked per week
		hoursWorked, //A double to store the total number of hours worked
		taxRate = 0.14, //The percentage gross incomed is taxed at
		grossIncome, //A double to store the gross income made
		netIncome, //A double to store net income after taxes
		clothesMoney, // A double to store money spent on clothes
		schoolSupplyMoney, //A double to store money spent on school supplies
		remainingMoney,  //A double to store money left after buying clothes and school supplies
		savingsBondsMoney; //A double to store money spent on savings bonds

	//Ask user for how much their hourly wage is
	cout << "How much do you make per hour? ";
	cin >> hourlyPayRate; //Store the users answer in hourlyPayRate
	cout << "How many hours did you work in the first week? ";
	cin >> week1Hours; //Store the users answer in week1Hours
	cout << "How many hours did you work in the second week? ";
	cin >> week2Hours; //Store the users answer in week2Hours
	cout << "How many hours did you work in the third week? ";
	cin >> week3Hours; //Store the users answer in week3Hours
	cout << "How many hours did you work in the fourth week? ";
	cin >> week4Hours; //Store the users answer in week4Hours
	cout << "How many hours did you work in the fifth week? ";
	cin >> week5Hours; //Store the users answer in week5Hours


	//Calculate various values
	hoursWorked = week1Hours + week2Hours + week3Hours + week4Hours + week5Hours;
	grossIncome = hourlyPayRate * hoursWorked;
	netIncome = grossIncome * (1 - taxRate);
	clothesMoney = netIncome * 0.1;
	schoolSupplyMoney = netIncome * 0.01;
	remainingMoney = netIncome - clothesMoney - schoolSupplyMoney;
	savingsBondsMoney = remainingMoney * 0.25;

	//Print results to screen
	cout << fixed << setprecision(2);
	cout << "\n\nGross Income" << setw(20) << "Net Income" << setw(30) << "Money Spent on Clothes\n";
	cout << "------------" << setw(20) << "----------" << setw(30) << "----------------------\n";
	cout << setw(12) << grossIncome << setw(20) << netIncome << setw(29) << clothesMoney << endl;
	cout << "\n\nMoney Spent on School Supplies" << setw(40) << "Money Spent on Savings Bonds" << setw(40) << "Money Parents Spent on Savings Bonds" << endl;
	cout << "------------------------------" << setw(40) << "----------------------------" << setw(40) << "------------------------------------" << endl;
	cout << setw(30) << schoolSupplyMoney
		<< setw(40) << savingsBondsMoney
		<< setw(40) << savingsBondsMoney / 2 << endl;


	return 0;
}