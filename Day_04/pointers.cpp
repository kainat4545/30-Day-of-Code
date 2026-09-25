#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr1 = &x;
    cout << ptr1 << endl;
    cout << *ptr1 << endl;
    *ptr1 = 1000;
    cout << *ptr1 << endl;
    int *y = new int;
    *y = 022;
    cout << *y << endl;

    return 0;
}