#include<iostream>
using namespace std;
 
    void choice(){
    int choice;
    cout << "1. monday" << endl;
    cout << "2. tuesday" << endl;
    cout << "3. wednesday" << endl;
    cout << "4. thursday" << endl;
    cout << "5.friday"  <<endl;
    cout << " 6. saturday" <<endl;
    cout<< "7. sunday" << endl;

    cout << "Enter your choice: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout << "monday"<<endl;
        break;

    case 2:
        cout << "tuesday " << endl;
        break;

    case 3:
        cout << "wednesday " << endl;
        break;

    case 4:
        cout << "thursday "<< endl;
        break;

    case 5:
        cout << "friday" << endl;
        break;
    case 6:
        cout<<"saturday"<<endl;
        break;
    case 7:
    cout<<"sunday"<<endl;
    break;
    default:
    cout<<"invalid choice"<<endl;
    }
    
}
    int main(){
     choice();
        return 0;


    }