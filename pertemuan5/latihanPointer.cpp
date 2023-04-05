#include <iostream>
using namespace std;

void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int *arrPointer(int size)
{
    int *result = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        result[i] = i + 1;
    }
    return result;
}

int *bubleSort(int panjang)
{
    int *arr = (int *)malloc(panjang * sizeof(int));
    for (int i = 0; i < panjang; i++)
    {
        cout << "masukkan elemen ke " << i + 1 << " : ";
        cin >> arr[i];
    }
    return arr;
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    printArr(arr, n);

    cout << endl;

    int *cobaDnArray = arrPointer(n);
    printArr(cobaDnArray, n);

    int panjang;
    cout << "Masukkan panjang Array : ";
    cin >> panjang;
    int *buble = bubleSort(panjang);
    printArr(buble, panjang);

    return 0;
}