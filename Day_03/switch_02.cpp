#include <iostream>
using namespace std;

void choice()
{
    bool run = true;

    while (run)
    {
        int choice;
        cout << "Enter your choice between 1 and 7 or enter -1 to exit  : ";
        cin >> choice;

        if (choice == -1)
        {
            run = false;
        }

        if (choice >= 1 && choice <= 7)
        {
            cout << "valid choice" << endl;
        }
        else
        {
            cout << "invalid choice" << endl;
        }

        switch (choice)
        {
        case 1:
            cout << "monday" << endl;
            break;

        case 2:
            cout << "tuesday " << endl;
            break;

        case 3:
            cout << "wednesday " << endl;
            break;

        case 4:
            cout << "thursday " << endl;
            break;

        case 5:
            cout << "friday" << endl;
            break;
        case 6:
            cout << "saturday" << endl;
            break;
        case 7:
            cout << "sunday" << endl;
            break;
        default:
            cout << "invalid choice" << endl;
        }
    }
}

int main()
{

    choice();
    return 0;
}