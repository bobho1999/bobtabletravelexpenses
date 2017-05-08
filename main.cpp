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

    // Key variables
    double total;
    double mealTotal;
    double spentTotal;

    // employee info
    string name;
    int days;
    double departureTime;
    double arrivalTime;
    double airplaneFee;

    // company allowed spending limits
    double allowedTotal;
    double allowedParkingFee;
    double allowedTaxiFee;
    double allowedBreakfastFee;
    double allowedLunchFee;
    double allowedDinnerFee;
    double allowedMealTotal;

    // variables for airplane costs

    // variables for rental cars and private vehicle
    double rentalcarFee;
    double privatecarFee;
    double taxiFee;

    // ask for name (maybe create a function for this)
    cout << "Employee travel expense program by Bob, Jason, Jim, Oscar, and Shaun" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    cout << "Enter the employee's name:";
    cin >> name;

    // ask for the length of the employee's trip (maybe create a function for this)
    cout << "How many days long was " << name << "'s trip?" << endl;
    cin >> days;
    while (days < 1)
    {
        cout << "Invalid Input! The trip can't be less than 1 day long" << endl;
        cout << "Enter a value larger than 1:";
        cin >> days;
    }

    // ask for when the employee left for the trip (maybe create a function for this)
    cout << "Please use the 0000 - 2400 format for time entries" << endl;
    cout << "When did " << name << " leave for the trip?";
    cin >> departureTime;
    while (departureTime < 0 || departureTime > 2400)
    {
        cout << "Invalid Input! Time must be within the range of 0000 - 2400" << endl;
        cout << "Enter a valid value:";
        cin >> departureTime;
    }

    return 0;
}

