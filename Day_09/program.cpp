#include <iostream>
using namespace std;

int main()
{
    int array[3] = {1, 2, 3};
    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;

    cout << &(array[0]) << endl;
    cout << &(array[1]) << endl;
    cout << &(array[2]) << endl;
    int *ptr = &array[0];
    cout << *ptr << endl;

    return 0;
}