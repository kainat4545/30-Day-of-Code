#include <iostream>
using namespace std;
// part 2
void arithmetic(int a, int b, int &sum, int &diff, int &product)
{
    sum = a + b;
    diff = a - b;
    product = a * b;
}
//part 3

   void area_circle_ptr(double r, double *area, double *circumference)
{
    *area = 3.14159 * r * r;
    *circumference = 2 * 3.14159 * r;
}
 void area_circle_ref(const double &r, double &area, double &circumference)
{
    area = 3.14159 * r * r;
    circumference = 2 * 3.14159 * r;
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
    
     //part 3


    double radius = 5.0;

    double area1, circumference1;
    double area2, circumference2;

      // call funtion of ptr
    area_circle_ptr(radius, &area1, &circumference1);

    // Calling reference funtion
    area_circle_ref(radius, area2, circumference2);

    cout << "Using Pointers:" << endl;
    cout << "Area = " << area1 << endl;
    cout << "Circumference = " << circumference1 << endl;

    cout << endl;

    cout << "Using References:" << endl;
    cout << "Area = " << area2 << endl;
    cout << "Circumference = " << circumference2<< endl;


    return 0;
}