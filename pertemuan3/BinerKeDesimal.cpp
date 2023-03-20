#include <iostream>
#include <string.h>
#include <cstring>
#include <math.h>
#include <stdlib.h>
#include <typeinfo>
#include <cstdlib>

using namespace std;

void BinerKeDesimal(string binner);
int main()
{
    string binner;
    cout << "Masukkan Angka Biner : ";
    cin >> binner;
    BinerKeDesimal(binner);
    return 0;
}
void BinerKeDesimal(string binner)
{
    int kali = 2;
    int pangkat = 0;
    int desimal = 0;

    for (int i = binner.length() - 1; i >= 0; i--)
    {

        // desimal += binner[i] * pow(kali, pangkat);
        // pangkat++;

        if (binner[i] == '1') // ketika huruf = 1,
        {
            // desimal = desimal + 1 * 2 pangkat sesuai dengan increment
            desimal += 1 * pow(kali, pangkat);
        }

        pangkat++;
    }

    cout << "Desimal dari bilangan binner " << binner << " Adalah " << desimal;
}
