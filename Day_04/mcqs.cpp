#include<iostream>
using namespace std;
 
    // int square(int x)
    //  {
    //      return x * x;
    //      }  
    // int main() {
    //      cout << square(3 + 2);
    //      return 0;
    //      }

#include<iostream>
using namespace std;
 
int main()
{
    int a = 3, b = 7; 
int* p = &a; 
int* q = &b; 
*p = *q; 
cout << a << ' ' << b;
    return 0;
}