#include<iostream>
using namespace std;
  //part 2
// Dynamically allocates an array of size doubles and initializes
// every element to initialValue  returns the pointer to the caller
// who becomes responsible for deleting it with delete[]
double* createDoubleArray(int size, double initialValue) {
    double* arr = new double[size];

    for (int i = 0; i < size; i++) {
        arr[i] = initialValue;
    }

    return arr;
}
    // part 3
    void reverseArray(int *arr, int size) {
    if (arr == nullptr || size <= 1) {
        return;                
    }

    int *left = arr;            
    int *right = arr + size - 1; 

    while (left < right) {
        int temp = *left;       
        *left = *right;
        *right = temp;

        left++;                 
        right--;
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
  //part 4
    void leakyFunction() {
    // LEAK: memory is allocated with "new" but never freed with "delete"
    // When the function ends the pointer p is destroyed but the heap
    // memory it pointed to stays reserved  and nobody can access it anymore.
    int *p = new int[1000];
    p[0] = 42;
    cout << "Value: " << p[0] << endl;
    }

 
int main()
{
    //part 1
    //OBSERVATION:
    //new[] allocates an array  only delete[] should free it (not plain delete).
  // Using plain delete on a new[] array is undefined behavior it may crash
  //corrupt memory or seem to "work" by luck but it's never safe 
  //Rule: match new with delete and new[] with delete[] never mix them
    int a;
    cout << "Enter the size of the array: ";
    cin >> a;
    int* array = new int[a];
    for (int i = 0; i < a; i++) {
        array[i] = i + 1;
    }
    cout << "Array contents: ";
    for (int i = 0; i < a; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array;
   array = nullptr;
    //part 2
   int size = 4;
    double value = 3.14;
    double* myArray = createDoubleArray(size, value);
    cout << "Array contents: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;
    delete[] myArray;
    myArray = nullptr;



    //part 3
    int c[] = {1, 2, 3, 4, 5};
    int b[] = {10, 20, 30, 40};

    cout << "Before: ";
    printArray(c, 5);
    reverseArray(c, 5);
    cout << "After:  ";
    printArray(c, 5);

    cout << "Before: "<<endl;
    printArray(b, 4);
    reverseArray(b, 4);
    cout << "After:  ";
    printArray(b, 4);
    //part 4
    for (int i = 0; i < 5; i++) {
        leakyFunction();   
    }
    return 0;
}