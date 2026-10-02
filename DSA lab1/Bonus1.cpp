#include <iostream>
using namespace std;
int main()
{
   int rows;
         cout << "Please enter how rows: ";
         cin >> rows;
     int **arr = new int*[rows];
       for (int i = 0; i < rows; i++)
    {
   int cols;
          cout << "How many columns for row " << i << ": ";
          cin >> cols;
    arr[i] = new int[cols];
        for (int j = 0; j < cols; j++)
   {
     arr[i][j] = i * 10;
       }
    }
         cout << "\nHere is your jagged 2D array:" << endl;
          for (int i = 0; i < rows; i++)
        {
           cout << "Row " << i << ": ";
    }
         for (int i = 0; i < rows; i++)
       {
      delete[] arr[i];
        }
         delete[] arr;
    return 0;
}