#include <iostream>

using namespace std;
// bool linearSearch(int k, int n, int A[])
// {
//     bool found = false;
//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] == k)
//         {
//             found = true;
//         }
//     }
//     return found;
// }

// bool linearSearch(int k, int n, int A[])
// {
//     bool found = false;
//     A[n - 1] = k;
//     int i = 0;
//     while (A[i] != k)
//     {
//         i++;
//     }
//     if (i <= n)
//     {
//         found = true;
//     }
//     return found;
// }

// bool linearSearchSortedSimple(int k, int n, int A[])
// {
//     bool found = false;
//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] == k)
//         {
//             found = true;
//         }
//         if (A[i] > n)
//         {
//             found = false;
//         }
//     }
//     return found;
// }

bool binarySearch(int k, int n, int A[])
{
    bool found = false;
    int batasBawah = 0;
    int batasAtas = n - 1;

    while (batasBawah <= batasAtas && !found)
    {
        int mid = (batasAtas + batasBawah) / 2;

        if (A[mid] == k)
        {
            found = true;
        }
        else
        {
            if (A[mid] > k)
            {
                batasAtas = mid - 1;
            }
            else
            {
                batasBawah = mid + 1;
            }
        }
    }
    return found;
}
int main()
{
    int arr[] = {5, 6, 4, 7, 3, 8, 2, 9, 1};
    int n = sizeof(arr) / sizeof(int);
    int k = 23;
    bool hasil = binarySearch(k, n, arr);
    cout << hasil;
    return 0;
}