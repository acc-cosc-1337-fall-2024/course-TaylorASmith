//write include statements
#include <iostream>
#include "repetition.h"
using namespace std;
//write using statements

int main() 
{
	int choice;
    bool exitMenu = false;

    do {
        cout << "1-Factorial\n"
             << "2-Greatest Common Divisor\n"
             << "3-Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int num;
                cout << "Enter a number to find its factorial: ";
                cin >> num;
                cout << "Factorial of " << num << " is " << factorial(num) << endl;
                break;
            }
            case 2: {
                int num1, num2;
                cout << "Enter two numbers to find their Greatest Common Divisor: ";
                cin >> num1 >> num2;
                cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
                break;
            }
            case 3: {
                char confirm;
                cout << "Are you sure you want to exit? (y/n): ";
                cin >> confirm;
                if (confirm == 'y' || confirm == 'Y')
                    exitMenu = true;
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (!exitMenu);

    return 0;
}
