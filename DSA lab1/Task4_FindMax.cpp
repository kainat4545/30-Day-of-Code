#include <iostream>
using namespace std;

// Part 2
int findMax(const int *arr, int size)
{
    int max = *arr;
    const int *ptr = arr + 1;
    while (ptr < arr + size)
    {
        if (*ptr > max)
        {
            max = *ptr;
        }
        ptr++;
    }
    return max;
}
int countOccurrences(const char *str, char target)
{
    int count = 0;
    while (*str != '\0')
    {
        if (*str == target)
        {
            count++;
        }
        str++;
    }
    return count;
}
// Part 3
int square(int x)
{
    return x * x;
}
int increment(int x)
{
    return x + 1;
}
void applyOperation(int *begin, int *end, int (*op)(int))
{
    while (begin < end)
    {
        *begin = op(*begin);
        begin++;
    }
}
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    // Part 1
    int arr1[7] = {1, 2, 3, 4, 5, 6, 7};
    cout << "3rd element using arr[2] = " << arr1[2] << endl;
    cout << "3rd element using *(arr + 2) = "
         << *(arr1 + 2) << endl;
    cout << "Addresses of array elements:" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "Address of arr1[" << i << "] = "
             << &arr1[i] << endl;
    }
    cout << "Difference:" << endl;
    cout << "*arr + 3 = " << *arr1 + 3 << endl;
    cout << "*(arr + 3) = " << *(arr1 + 3) << endl;
    // Part 2
    int numbers[] = {10, 25, 7, 45, 32, 18};
    int size2 = 6;
    int maximum = findMax(numbers, size2);
    cout << "Maximum value = " << maximum << endl;
    const char *text = "programming";
    char target = 'm';
    int result = countOccurrences(text, target);
    cout << "String = " << text << endl;
    cout << "Character = " << target << endl;
    cout << "Occurrences = " << result << endl;

    // Part 3
    int arr3[] = {1, 2, 3, 4, 5};
    int size3 = 5;
    cout << "Before operation: ";
    printArray(arr3, size3);
    applyOperation(arr3, arr3 + size3, square);
    cout << "After square: ";
    printArray(arr3, size3);
    applyOperation(arr3, arr3 + size3, increment);
    cout << "After increment: ";
    printArray(arr3, size3);

    return 0;
}