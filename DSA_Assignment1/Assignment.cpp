#include <iostream>
using namespace std;
  class Library
            {
     int n;
     double *book_prices;
     public:
   Library()
   {
      n = 0;
      book_prices = nullptr;
 }
   void inputSize()
{
   cout << "Enter number of books:";
   cin >> n;
   book_prices = new double[n];
 }
     void inputPrices()
 {
    cout << "Enter prices of the books:" << endl;
    for (int i = 0; i < n; i++)
  {
    cout << "Book " << i + 1 << ": ";
    cin >> book_prices[i];
  }
 }
    void display()
  {
     double sum = 0;
     cout << "Book Prices:" << endl;
        for (int i = 0; i < n; i++){
     cout << "Book " << i + 1 << ": " << book_prices[i] << endl;
     sum = sum + book_prices[i];
   }
    double average = sum / n;
        cout << "Average Price: " << average << endl;
     }
   ~Library()
   {
      delete[] book_prices;
    }
       };
 int main(){
        Library lib;
        lib.inputSize();
        lib.inputPrices();
        lib.display();
    return 0;
  }