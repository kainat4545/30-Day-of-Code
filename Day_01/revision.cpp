#include <iostream>
using namespace std;

int main()
{
    // int x = 0;
    // while (x < 10)
    // {
    //     cout << "hello world" << endl;
    //     x++;
    // }

    bool y = true;
    int z = 0;

    while (y)
    {
        cout << "hello world" << endl;

        z++;
        if (z == 5)
        {
            y = false;
        }
    }

    return 0;
}