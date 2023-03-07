#include <iostream>

using namespace std;
int main()
{
    int a = 10;
    int array[2][3] = {1, 2, 3, 4, 5, 6};
    cout << sizeof(array[0]) << endl;
    cout << sizeof(array) / sizeof(array[3]);

    return 0;
}