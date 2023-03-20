#include <iostream>

using namespace std;
void DesimalKeBiner(int x);
int main()
{
    int desimal;

    cout << "Masukkan bilangan desimal : ";
    cin >> desimal;

    DesimalKeBiner(desimal);

    return 0;
}
void DesimalKeBiner(int x)
{
    int biner[8];
    for (int i = 1; i <= sizeof(biner) / sizeof(int) - 1; i++)
    {

        // if (x % 2 == 0)
        // {
        //     x /= 2;
        //     biner[i] = 0;
        // }
        // else
        // {
        //     x /= 2;
        //     biner[i] = 1;
        // }
        biner[i] = x % 2;
        x /= 2;
    }
    for (int i = sizeof(biner) / sizeof(int) - 1; i > 0; i--)
    {
        cout << biner[i];
    }
}