#include <iostream>
using namespace std;

int addition()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    return sum;
}

void voidaddition()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    cout << "the sum of first 10 numbers in void function is : " << sum << endl;
}

int main()
{
    int result = addition();
    cout << "the sum of first 10 numbers in int return function is : " << result << endl;
    voidaddition();

    return 0;
}