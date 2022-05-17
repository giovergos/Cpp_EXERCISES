/* Create a class Scooter which represents a scooter and a class ElectricalScooter which represents an electrical scooter and its a derived class of Scooter.
For Scooter we need:
The maximum number of kilometers the scooter can travel.
The release year of the scooter.
For ElectricalScooter we need access to the same information and also:
The charging time of the scooter's battery.
Moreover we need for the classes:
getMaxKM: returns the maximun number of kilometers the scooter can travel.
getYear: returns the release year of the scooter.
getPollutionScore: every vehicle has its own score depending on pollution. For scooter, the score equals to (maxKM*250)/365. For electrical scooter, the score equals to (charging time of the battery*300)/365.
getTaxes: returns vehicle's taxes. For scooter, taxes equal to (2022-release year)*12.5, and for electrical scooter, taxes equal to the same minus the 20% of it.
getChargingTime and setChargingTime: that are used only in ElectricalScooter as getter and setter for battery's charging time.
Also create default constructors that declare all the variables with zero, and constructors with parameters.
The main code is given. */

#include "Scooter.h"
#include "ElectricalScooter.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Declaration of test functions
void testDefaultConstructors();
void testGetPollutionScore();
void testGetTaxes();
void testInheritance();

// global input variables
int maxKM1, year1, maxKM2, year2, chargingTime;

// main
int main(int argc, char const *argv[])
{
    // The numbers will be printed with 1 decimal digit by default (see here https://www.cplusplus.com/reference/ios/fixed/)
    cout << fixed << setprecision(1);

    //clog is commonly used for logging purposes. It is used here instead of cout just for eagle-related purposes 
    clog << "Scooter maxKM: ";
    cin >> maxKM1;
    clog << "Scooter year: ";
    cin >> year1;
    clog << "Electrical Scooter maxKM: ";
    cin >> maxKM2;
    clog << "Electrical Scooter year: ";
    cin >> year2;
    clog << "Electrical Scooter charging time (mins): ";
    cin >> chargingTime;

    testDefaultConstructors();
    testGetPollutionScore();
    testGetTaxes();
    testInheritance();

    return 0;
}

// Implementation of test functions
void testDefaultConstructors()
{
    cout << ">> Test DefaultConstructors" << endl;
    Scooter scooter;
    ElectricalScooter eScooter;
    cout << "getMaxKM: " << scooter.getMaxKM() << endl;
    cout << "getYear: " << scooter.getYear() << endl;
    cout << "getMaxKM: " << eScooter.getMaxKM() << endl;
    cout << "getYear: " << eScooter.getYear() << endl;
    cout << "getChargingTime: " << eScooter.getChargingTime() << endl;
}

void testGetPollutionScore()
{
    cout << ">> Test GetPollutionScore" << endl;
    Scooter scooter1(maxKM1, year1);
    double actual = scooter1.getPollutionScore();
    cout << "getPollutionScore test1: " << actual << endl;

    Scooter scooter2(maxKM1 + 100, year1 - 10);
    actual = scooter2.getPollutionScore();
    cout << "getPollutionScore test2: " << actual << endl;

    ElectricalScooter eScooter1(maxKM2, year2, chargingTime);
    actual = eScooter1.getPollutionScore();
    cout << "getPollutionScore test3: " << actual << endl;

    ElectricalScooter eScooter2(maxKM2 + 50, year2 - 2, chargingTime - 10);
    actual = eScooter2.getPollutionScore();
    cout << "getPollutionScore test4: " << actual << endl;
}

void testGetTaxes()
{
    cout << ">> Test GetTaxes" << endl;
    Scooter scooter1(maxKM1, year1);
    double actual = scooter1.getTaxes();
    cout << "getTaxes test1: " << actual << endl;

    Scooter scooter2(maxKM1 + 100, year1 - 10);
    actual = scooter2.getTaxes();
    cout << "getTaxes test2: " << actual << endl;

    ElectricalScooter eScooter1(maxKM2, year2, chargingTime);
    actual = eScooter1.getTaxes();
    cout << "getTaxes test3: " << actual << endl;

    ElectricalScooter eScooter2(maxKM2 + 50, year2 - 2, chargingTime - 10);
    actual = eScooter2.getTaxes();
    cout << "getTaxes test4: " << actual << endl;
}

void testInheritance()
{
    cout << ">> Test Inheritance" << endl;
    Scooter *s = new ElectricalScooter(maxKM1, year1, chargingTime);
    cout << "getTaxes test1: " << s->getTaxes() << endl;
    delete s;
}
