#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int choice;
    double num1, num2, result;
    char again;

    do
    {
        cout << "\n===== BASIC CALCULATOR =====" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Modulus (%)" << endl;
        cout << "6. Exit" << endl;

        cout << "\nEnter your choice: ";

        if (!(cin >> choice))
        {
            cout << "Invalid input! Please enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice == 6)
        {
            cout << "Thank you for using the calculator!" << endl;
            break;
        }

        if (choice < 1 || choice > 5)
        {
            cout << "Invalid choice! Please select 1 to 6." << endl;
            continue;
        }

        cout << "Enter first number: ";
        if (!(cin >> num1))
        {
            cout << "Invalid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "Enter second number: ";
        if (!(cin >> num2))
        {
            cout << "Invalid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice)
        {
            case 1:
                result = num1 + num2;
                cout << "Result = " << result << endl;
                break;

            case 2:
                result = num1 - num2;
                cout << "Result = " << result << endl;
                break;

            case 3:
                result = num1 * num2;
                cout << "Result = " << result << endl;
                break;

            case 4:
                if (num2 == 0)
                {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                else
                {
                    result = num1 / num2;
                    cout << "Result = " << result << endl;
                }
                break;

            case 5:
                if (num2 == 0)
                {
                    cout << "Error! Modulus by zero is not allowed." << endl;
                }
                else if (num1 != (int)num1 || num2 != (int)num2)
                {
                    cout << "Error! Modulus requires integer values." << endl;
                }
                else
                {
                    result = (int)num1 % (int)num2;
                    cout << "Result = " << result << endl;
                }
                break;
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\nCalculator closed successfully!" << endl;

    return 0;
}
