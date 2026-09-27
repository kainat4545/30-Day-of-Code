#include <iostream>
using namespace std;
// part 2
void arithmetic(int a, int b, int &sum, int &diff, int &product)
{
    sum = a + b;
    diff = a - b;
    product = a * b;
}

int main()
{
    //part 2
    int a = 2;
    int b = 6;
    int sum, diff, product;
    cout << "sum=" << sum << endl;
    cout << "diff=" << diff << endl;
    cout << "product=" << product << endl;

   // part 1
    double price = 99.99;
    double &priceref = price;
    priceref = 149.99;
    cout << "price:" << price << endl;
    cout << "priceref:" << priceref << endl;
    cout << "&price:" << &price << endl;
    cout << "&priceref:" << &priceref << endl;

    return 0;
}