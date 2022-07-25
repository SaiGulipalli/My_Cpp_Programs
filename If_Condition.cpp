#include <iostream>

using namespace std;

int main()
{
    int marks =100 ;
    cout << "Enter the marks : ";
    cin >> marks;

    if (marks >= 34 && marks <=100)
    {
        cout << "You are pass";
    }

    else if ( marks >= 0 && marks < 34)
    {
        cout << "Failed in the exam";

    }

    else
    {
        cout << "Invalid Input, Please enter valid no. from 0 - 100";
    }

    return 0;
}