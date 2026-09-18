#include <iostream>
using namespace std;

int main()
{
    int n;
    n = 100;

    int *ptr = &n;
    cout << "n " << n << endl;
    cout << "ptr " << ptr << endl;

    cout << "addr of n is " << &n << endl;
    cout << "the value at ptr " << *ptr << endl;

    int x = 9;
    int *ptr23 = &x;
    int y = 10 * (*ptr23);
    int z = y + x;

    cout << " x " << x << endl;
    cout << " y " << y << endl;
    cout << " z " << z << endl;
    return 0;
}