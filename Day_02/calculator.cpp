#include <iostream>
using namespace std;

int addition(int a, int b)
{
    int c = a + b;
    return c;
}

int subtraction(int a, int b)
{
    return (a - b);
}

int mul(int a, int b)
{
    return (a * b);
}

float division(int a, int b)
{
    return (a / b);
}

int main()
{
    float num1, num2;
    int result;
    cout << "number1 for addition:" << endl;
    cin >> num1;
    cout << "num2 for addition:" << endl;
    cin >> num2;
    result = addition(num1, num2);
    cout << "the result of addition is : " << result << endl;

    result = subtraction(num1, num2);
    cout << "result of subtraction is :" << result << endl;
    result = mul(num1, num2);
    cout << "result of mul is:" << result << endl;
    float r = division(num1, num2);
    cout << "result of division is :" << r << endl;

    return 0;
}