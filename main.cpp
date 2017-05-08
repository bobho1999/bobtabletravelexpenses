/*
 * C++ Travel Expenses group project
 * Authors: 何柏翰, Jason Lin, Jim Yeh, Oscar Cheng, and Shaun Cheon
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

// function prototypes
//
// there should be functions to get int Days, int Time, double Airplane flight cost, double rental car cost,
// double private vehicle cost, double parking cost, double taxi cost, double conference fee, double hotel cost,
// double food costs.
//
//

// main program
int main()
{

    // INITIALIZE VARIABLES

    // Input Handler Variable(s)
    double input;

    // KEY big variables
    double total;
    double mealTotal; // total cost of all food
    double spentTotal; // total spent on the trip

    // employee info
    string name;
    int days;
    double departureTime; // time employee left for trip
    double arrivalTime; // time employee came back from the trip

    // company allowed spending limits
    double allowedTotal; // TOTAL allowed by company
    double allowedParkingFee; // money allowed for parking fees
    double allowedTaxiFee; // money allowed for taxi fees
    double allowedBreakfastFee; // money allowed for breakfast fees
    double allowedLunchFee; // money allowed for lunch fees
    double allowedDinnerFee; // money allowed for dinner fees
    double allowedMealTotal; // allowedBreakfastFee + allowedLunchFee + allowedDinnerFee

    // variables for airplane costs
    double airplaneFee; // total cost of all plane tickets


    // variables for rental cars and private vehicle
    double rentalcarFee;
    double privatecarFee;
    double taxiFee;

    // ask for name (create a function for this)
    cout << "Employee travel expense program by Bob, Jason, Jim, Oscar, and Shaun" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    cout << "Enter the employee's name:";
    getline(cin,name);

    // ask for the length of the employee's trip (create a function with this)
    cout << "How many days long was " << name << "'s trip?" << endl;
    cin >> days;
    while (days < 1)  // validate that number of days > 1
    {
        cout << "Invalid Input! The trip can't be less than 1 day long" << endl;
        cout << "Enter a value larger than 1:";
        cin >> days;
    }

    // ask for when the employee left for the trip (create a function with this)
    cout << "Please use the 0000 - 2400 time format for time entries" << endl;
    cout << "When did " << name << " leave for the trip?";
    cin >> departureTime;
    while (departureTime < 0 || departureTime > 2400)  // validate that 0 <= departureTime <= 2400
    {
        cout << "Invalid Input! Time must be within the range of 0000 - 2400" << endl;
        cout << "Enter a valid value:";
        cin >> departureTime;
    }

    // ask for when the employee came back after the trip (create a function with this)
    cout << "Please use the 0000 - 2400 time format for time entries" << endl;
    cout << "When did " << name << " come back from the trip?";
    cin >> arrivalTime;
    while (arrivalTime < 0 || arrivalTime > 2400)  // validate that 0 <= arrivalTime <= 2400
    {
        cout << "Invalid Input! Time must be within the range of 0000 - 2400" << endl;
        cout << "Enter a valid value:";
        cin >> arrivalTime;
    }

    // ask for the total cost of the plane flights (create a function with this)
    cout << "How many plane flights did " << name << " go on?";
    int flightc;
    cin >> flightc;
    while (flightc < 0)  // validate that number of flights !< 0
    {
        cout << "Invalid Input! The number of flights can't be negative!" << endl;
        cout << "Enter a valid value:";
        cin >> flightc;
    }
    for (int i = 1; i <= flightc; i++) // get values of each flight
    {
        cout << "Enter the cost of flight " << i << ":";
        cin >> input;
        while (input < 0)
        {
            cout << "Invalid Input! The plane flight can't cost less than $1" << endl;
            cout << "Enter a value larger than 0:";
            cin >> input;
        }
        airplaneFee += input; // calculate cost of all flights
        cout << airplaneFee;
    }


    return 0;
}

