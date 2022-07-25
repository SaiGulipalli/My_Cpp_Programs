#include <iostream>

using namespace std;

int main()
{

    int Enter;
    cout << "Please enter a number : ";
    cin >> Enter;

    {
        if (Enter % 2 == 0 && Enter >= 0 )
        {
            cout << "Even";
        }
        
        
        else if (Enter != 0 && Enter >= 0 )
        {
        
            cout << "Odd";
            return 0;
        }

        else if (Enter <= 0)
        {
            cout << "Invalid";
            return 0;
        }
        
    }

}