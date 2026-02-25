#include <iostream>

using namespace std;

int main()
{
	cout << "Rectangle Area Comparer" << endl;
    cout << "Put the length of the first rectangle: ";
    double length1;
    cin >> length1;
    
    cout << "Put the width of the first rectangle: ";
    double width1;
    cin >> width1;
    
    double area1 = length1 * width1;

    cout << "Put the length of the second rectangle: ";
    double length2;
    cin >> length2;
    
    cout << "Put the width of the second rectangle: ";
    double width2;
    cin >> width2;
    
    double area2 = length2 * width2;

    if (area1 > area2)
        cout << "The 1st rectangle has the greater area" << endl;
    else if (area2 > area1)
        cout << "The 2nd rectangle has the greater area" << endl;
    else
        cout << "The areas are the same" << endl;

    return 0;
}

