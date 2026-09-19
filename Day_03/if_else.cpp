#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age: " << endl;
    cin >> age;

    // if (age < 18)
    // {
    //     cout << " you are under age and can not cast your vote" << endl;
    // }
    // else if (age < 50)
    // {
    //     cout << " you can cast your vote" << endl;
    // }
    // else
    // {
    //     cout << " you are over age and can not cast your vote" << endl;
    // }

    if (age >= 18 && age <= 50)
    {
        cout << " you can cast your vote" << endl;
    }
    else
    {
        cout << " you can not cast your vote" << endl;
    }

    return 0;
}