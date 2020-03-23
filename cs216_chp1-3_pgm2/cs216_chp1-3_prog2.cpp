/*
Programmer Name: Kyle Absten
Date: 02/20/2020
Description:  This is the second program for the Chapter 1-3 Assignments for cs216.

This program will ask for user input to get the name of a movie and the amount of adult and children tickets sold.
It will then calculate various values and output a report to the console.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//Declare the needed variables
	string movieTitle; //Name of the movie.  This will be provided by the user through a prompt.
	int adultTickets,  //Number of adults tickets sold.  This will be provided by the user through a prompt.
		childTickets;  //Number of adults tickets sold.  This will be provided by the user through a prompt.
	double childPrice = 3.00, //Price of child ticket
		adultPrice = 6.00, //Price of adult ticket
		distributorsTake = 0.8, //Percentage that the distributor keeps of ticket sales
		grossBoxOffice, //Gross amount taken in from adult and child ticket sales
		netBoxOffice;  //Amount theatre gets to keep after paying the distributor

	//Ask for the movie title and store the response in the movieTitle variable
	cout << "What is the title of the movie? ";
	getline(cin, movieTitle);
	cout << "How many children's tickets were sold? ";
	cin >> childTickets;
	cout << "How many adult tickets were sold? ";
	cin >> adultTickets;

	//Calculate remaining values
	grossBoxOffice = (adultPrice * adultTickets) + (childPrice * childTickets);
	netBoxOffice = grossBoxOffice * (1.0 - distributorsTake);

	//Print report to the console
	cout << fixed << setprecision(2) << endl;
	cout << setw(34) << left << "Movie Name:" << "\"" + movieTitle + "\"" << endl;
	cout << setw(35) << left << "Adult Tickets Sold:" << adultTickets << endl;
	cout << setw(35) << left << "Children's Tickets Sold:"  << childTickets << endl;
	cout << setw(34) << left << "Gross Box Office Profit:" << "$" << grossBoxOffice << endl;
	cout << setw(33) << left << "Amount Paid To Distributor:" << "-$" << grossBoxOffice * distributorsTake << endl;
	cout << setw(34) << left << "Net Box Office Profit:" << "$" << netBoxOffice << endl;



	return 0;
}