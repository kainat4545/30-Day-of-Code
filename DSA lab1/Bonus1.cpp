#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    int **arr = new int*[row];
    for (int i = 0; i < row; i++)
    {
        int columns;
        cout << "Enter number of columns for row " << i << ": ";
        cin >> columns;

        arr[i] = new int[columns];
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = i * 10 + j;
        }
    }
    cout << "\nJagged 2D Array:" << endl;
    for (int i = 0; i < row; i++)
    {
        cout << "Row " << i << ": ";
    }
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}