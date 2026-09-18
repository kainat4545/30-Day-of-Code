#include <iostream>
using namespace std;

void addition(int a, int b)
{
    int c = a + b;
    cout << "the result of addition is : " << c << endl;
}

void subtraction(int a, int b)
{
    int c = a - b;
    cout << "the result of subtraction is :" << c << endl;
}

void mul(int a, int b)
{
    int c = a * b;
    cout << "result of mul is:" << c << endl;
}

void division(int a, float b)
{
    float c = a / b;
    cout << "result of division is :" << c << endl;
}

int main()
{
    float num1, num2;
    cout << "number1 for addition:" << endl;
    cin >> num1;
    cout << "num2 for addition:" << endl;
    cin >> num2;
    addition(num1, num2);

    subtraction(num1, num2);
    mul(num1, num2);
    division(num1, num2);

    float x = 7 / 10.0;
    cout << x << endl;

    return 0;
}