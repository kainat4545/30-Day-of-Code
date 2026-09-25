#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    string name[100];
    int rollNo[100];
    float cgpa[100];

    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Enter Student " << i + 1 << " ---" << endl;

        cout << "Name: ";
        cin >> name[i];

        cout << "Roll No: ";
        cin >> rollNo[i];

        cout << "CGPA: ";
        cin >> cgpa[i];
    }

    cout << "\n--- All Students ---" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". "
             << name[i]
             << " | Roll: " << rollNo[i]
             << " | CGPA: " << fixed << setprecision(2) << cgpa[i]
             << endl;
    }

    int top = 0;

    for (int i = 1; i < n; i++)
    {
        if (cgpa[i] > cgpa[top])
        {
            top = i;
        }
    }

    cout << "\nTop Student: " << name[top]
         << " | Roll: " << rollNo[top]
         << " | CGPA: " << fixed << setprecision(2) << cgpa[top]
         << endl;

    return 0;
}