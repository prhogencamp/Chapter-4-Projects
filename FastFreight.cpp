#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int weight;
    int miles;
    
    cout << "Please enter the weight of your package in kg:" << endl;
    cin >> weight;
    if (weight < 0 || weight > 20)
    {
        cout << "We are sorry, but we cannot ship your package." << endl;
        return 0;
    }
    cout << "How many miles will it be shipped?" << endl;
    cin >> miles;
    double ratePerMiles = miles / 500;
    double pricePerSmall = ratePerMiles * 1.10;
    double pricePerMedium = ratePerMiles * 2.20;
    double pricePerLarge = ratePerMiles * 3.70;
    double pricePerXL = ratePerMiles * 4.80;
    if (miles < 10 || miles > 3000)
    {
        cout << "We are sorry, but we cannot ship your package that distance." << endl;
    }
    else if (weight <= 2)
    {
        cout << "Your total cost is $" << fixed << setprecision(2) << pricePerSmall << " to ship your package." << endl;
    }
    else if (weight > 2 && weight <= 6)
    {
        cout << "Your total cost is $" << fixed << setprecision(2) << pricePerMedium << " to ship your package." << endl;
    }
    else if (weight > 6 && weight <= 10)
    {
        cout << "Your total cost is $" << fixed << setprecision(2) << pricePerLarge << " to ship your package." << endl;
    }
    else if (weight > 10 && weight <= 20)
    {
        cout << "Your total cost is $" << fixed << setprecision(2) << pricePerXL << " to ship your package." << endl;
    }
}
