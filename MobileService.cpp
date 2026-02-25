/* create the code yourself */
/* Use Switch Statement */
#include <iostream>

using namespace std;

int main()
{
    cout << "Cost Calculator" << endl;
    cout << "Enter the number of units purchased ";
    int units;
    cin >> units;

    int discount;
    if (units >= 100)
    {discount = 0.50;}
    else if (units >= 50 && units < 100)
    {discount = 0.40;}
    else if (units >= 20 && units < 50)
    {discount = 0.30;}
    else if (units >= 10 && units < 20)
    {discount = 0.20;}

    int price = 199;
    double cost = price * units;
    double totalCost = cost - (cost * discount);

    cout << "The total cost for the amount of units purchased is $" << totalCost << "." << endl;

    return 0;
}