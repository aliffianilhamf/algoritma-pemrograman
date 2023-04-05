#include <iostream>

using namespace std;
void tampil(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

void pecah(int *arr, int arrGanjil[], int arrGenap[], int length, int &lengthGanjil, int &lengthGenap)
{
    cout << endl;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arrGanjil[lengthGanjil] = arr[i];
            lengthGanjil++;
        }
        else
        {
            arrGenap[lengthGenap] = arr[i];
            lengthGenap++;
        }
    }
    tampil(arrGanjil, lengthGanjil);
    cout << endl;
    tampil(arrGenap, lengthGenap);
}

int *ascendingBubbleSort(int *arrGanjil, int lengthGanjil)
{
    bool swapp = false;
    while (!swapp)
    {
        swapp = true;
        for (int i = 0; i < lengthGanjil - 1; i++)
        {
            if (arrGanjil[i] > arrGanjil[i + 1])
            {
                swapp = false;
                int temp = arrGanjil[i + 1];
                arrGanjil[i + 1] = arrGanjil[i];
                arrGanjil[i] = temp;
            }
        }
    }
    return arrGanjil;
}

int *descendingBubbleSort(int *arrGenap, int lengthGenap)
{
    bool swapp = false;
    while (!swapp)
    {
        swapp = true;
        for (int i = 0; i < lengthGenap - 1; i++)
        {
            if (arrGenap[i] < arrGenap[i + 1])
            {
                swapp = false;
                int temp = arrGenap[i + 1];
                arrGenap[i + 1] = arrGenap[i];
                arrGenap[i] = temp;
            }
        }
    }
    return arrGenap;
}

int *gabungArray(int *arrGanjil, int *arrGenap, int lengthGanjil, int lengthGenap)
{
    int length = lengthGanjil + lengthGenap;
    int a = 0;
    int b = 0;
    int *arrGabung = (int *)malloc(length * sizeof(int));
    for (int i = 0; i < length;)
    {
        if (a < lengthGanjil)
        {
            arrGabung[i] = arrGanjil[a];
            a++;
            i++;
        }
        if (b < lengthGenap)
        {
            arrGabung[i] = arrGenap[b];
            b++;
            i++;
        }
    }
    return arrGabung;
}
int main()
{

    int arr[] = {1, 3, 6, 4, 7, 9, 8, 2, 1, 9};
    int length = sizeof(arr) / sizeof(int);
    int arrGanjil[length] = {};
    int arrGenap[length] = {};
    int lengthGanjil = 0, lengthGenap = 0;

    tampil(arr, length);
    cout << endl;
    cout << "Sebelum sorting" << endl;
    pecah(arr, arrGanjil, arrGenap, length, lengthGanjil, lengthGenap);
    cout << endl;
    cout << "setelah sorting" << endl;
    int *ascendingGanjil = ascendingBubbleSort(arrGanjil, lengthGanjil);
    int *descendingGenap = descendingBubbleSort(arrGenap, lengthGenap);
    cout << "Array Ganjil : ";
    tampil(ascendingGanjil, lengthGanjil);
    cout << "\nArray Genap : ";
    tampil(descendingGenap, lengthGenap);
    cout << endl;
    int *arrGabung = gabungArray(arrGanjil, arrGenap, lengthGanjil, lengthGenap);
    cout << "\nArray Gabung : ";
    tampil(arrGabung, length);

    return 0;
}