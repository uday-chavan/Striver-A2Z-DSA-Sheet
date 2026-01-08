#include <iostream>
using namespace std;

int main()
{
    // use of conditional statements //
    int marks = 45;

    if (marks < 25)
    {
        cout << "F" << endl;
    }
    else if (marks >= 25 && marks <= 45)
    {
        cout << "E" << endl;
    }
    else if (marks > 45 && marks <= 50)
    {
        cout << "D" << endl;
    }
    else if (marks > 50 && marks <= 60)
    {
        cout << "C" << endl;
    }
    else if (marks > 60 && marks <= 80)
    {
        cout << "B" << endl;
    }
    else if (marks > 80 && marks <= 100)
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "Invalid!" << endl;
    }
    return 0;
}