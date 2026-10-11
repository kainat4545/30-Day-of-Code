#include <iostream>
using namespace std;

int main()
{
    //part 1
    int temp = 25;
    int *tempPtr = &temp;
    cout << "adress of temprature : " << &temp << endl;
    cout << "value of temp :  " << temp << endl;
    cout << "value of temp using Ptr:" << *tempPtr << endl;
    cout << "address of pointer by itself:" << &tempPtr << endl;
    
    *tempPtr = 30;
    cout << "change the value of temp to :" << temp << endl;
    cout << *tempPtr << endl;
    //part2


    int x = 10;
    int y = 20;
    int *px = &x;
    int *py = &y;

    int sum = 0;
    sum = *px + *py;
    cout << "sum of values:" << sum << endl;
    int product = 1;
    product = *px * *py;

    cout << "product of values:" << product << endl;

  //part3

    int z;
    z = *px;
    *px = *py;
    *py = z;
    cout << "value of x:" << x << endl;
    cout << "value of y:" << y << endl;

    //part 4
    
    int *ptr = nullptr;


    if (ptr != nullptr)
    {
        cout << *ptr;
    }
    else
    {
        cout << "pointer is null" << endl;
        // Dereferencing an uninitialized or null pointer is dangerous
        //  because it does not point to a valid memory location.
        return 0;
    }
}