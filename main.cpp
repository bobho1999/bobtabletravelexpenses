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

    // company spending limits
    double allowedTotal;
    double allowedParkingFee;
    double allowedTaxiFee;
    double allowedBreakfastFee;
    double allowedLunchFee;
    double allowedDinnerFee;
    double allowedMealTotal;

    // variables for airplane costs
    double departureTime;
    double arrivalTime;
    double airplaneFee;

    // variables for rental cars and private vehicle
    double rentalcarFee;
    double privatecarFee;
    double taxiFee;

    // ask for name
    cout << "Employee travel expense program by Bob, Jason, Jim, Oscar, and Shaun" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    cout << "Enter the employee's name:";
    cin >> name;



    return 0;
}

