#include<iostream>
using namespace std;
 
int main()
{
    int n ;
    int i;
    int fact=1;
    cout<<"enter a number:"<<endl;
    cin>>n;
    for(int i=n; i>=1; i--){
        fact=fact*i;
    }
    cout<<"factorial:"<<fact;

    return 0;
}  