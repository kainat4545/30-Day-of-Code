#include <iostream>
using namespace std;

int main()
{
    int choice;
    int num1, num2;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice)
    {
    case 1:
        cout << "Answer: " << num1 + num2 << endl;
        break;

    case 2:
        cout << "Answer: " << num1 - num2 << endl;
        break;

    case 3:
        cout << "Answer: " << num1 * num2 << endl;
        break;

    case 4:
        cout << "Answer: " << num1 / num2 << endl;
        break;

    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}