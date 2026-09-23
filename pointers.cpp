#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr1 = &x;
    cout << ptr1 << endl;
    cout << *ptr1 << endl;

    return 0;
}