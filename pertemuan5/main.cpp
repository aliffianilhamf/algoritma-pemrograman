#include <iostream>

using namespace std;

int length();
int *inputArr(int arr[], int n);
void tampil(int arr[], int n);
void bubbleSort(int arr[], int n);
int *bubbleSort2(int arr[], int n);
int *bubbleSort3(int n);

int main()
{
    // deklarasi penampung jumlah elemen array
    int n = length();

    // Inputan Jumlah elemen array
    // cout << "Masukkan Jumlah data : ";
    // cin >> n;

    // inisialisasi variable pointer arr dengan malloc
    int *arr = (int *)malloc(n * sizeof(int));
    arr = inputArr(arr, n);
    // pengulangan untuk memasukkan nilai ke dalam array

    cout << "\n";
    cout << "Array Belum Terurut : ";
    tampil(arr, n);
    cout << "\nProses Bubble Sort " << endl;
    // void function
    // cout<<"Bubble sort dengan fungsi Void"<<endl;
    // bubleSort(arr, n);

    // return function
    int *arr2 = bubbleSort2(arr, n);
    tampil(arr2, n);

    // cout << "Bubble sort dengan fungsi Return & local Variable array" << endl;
    // int *arr3 = bubbleSort3(n);
    // tampil(arr3, n);

    return 0;
}
// input length function
int length()
{
    int n;
    cout << "ALGORITMA BUBBLE SORT" << endl;
    cout << "-----------------------------------\n\n"
         << endl;
    cout << "Masukkan Jumlah data : ";
    cin >> n;
    return n;
}

// input elemen array
int *inputArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan Data Ke-" << i + 1 << " = ";
        cin >> arr[i];
    }
    return arr;
}
// print array
void tampil(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "[" << arr[i] << "]"
             << " ";
    }
}
// buble short with void function
/*
void bubbleSort(int arr[], int n)
{
    int temp;
    bool swapp = false;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan Data Ke-" << i << " = ";
        cin >> arr[i];
    }
    cout << "\n";
    cout << "Array Belum Terurut : ";
    tampil(arr, n);
    cout << "\nProses Bubble Sort " << endl;

    while (!swapp)
    {
        swapp = true;
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] > arr[i])
            {
                swapp = false;
                temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
            }

            tampil(arr, n);
            cout << endl;
        }
    }

    cout << "Hasil Telah Terurut : ";
    tampil(arr, n);
}
*/

// buble sort with return function
int *bubbleSort2(int arr[], int n)
{
    int temp;
    bool swapp = false;

    while (!swapp)
    {
        swapp = true;
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] > arr[i])
            {
                swapp = false;
                temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
            }
            tampil(arr, n);
            cout << endl;
        }
    }
    cout << "Hasil Telah Terurut : ";
    return arr;
}

/*
int *bubbleSort3(int n)
{
    int *arr = (int *)malloc(n * sizeof(int));
    int temp;
    bool swapp = false;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan Data Ke-" << i << " = ";
        cin >> arr[i];
    }
    cout << "\n";
    cout << "Array Belum Terurut : ";
    tampil(arr, n);
    cout << "\nProses Bubble Sort " << endl;

    while (!swapp)
    {
        swapp = true;
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] > arr[i])
            {
                swapp = false;
                temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
            }
            tampil(arr, n);
            cout << endl;
        }
    }
    cout << "Hasil Telah Terurut : ";
    return arr;
}
*/