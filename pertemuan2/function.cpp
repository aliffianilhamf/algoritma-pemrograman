#include <iostream>

using namespace std;

// prototype fungsi
int jumlah(int x, int z);
int kurang(int x, int y);
int kali(int x, int y);
float bagi(int x, int y);

// isikan default parameter disini
// ketika parameter sudah diatur dengan nilai default ,
//  maka parameter selanjutnya juga harus default;
// void tampil(int a, int b = 1, int c); akan error
void tampil(int a, int b = 1, int c = 2);

// int a, b, hasilTambah, hasilKurang, hasilKali;
// float hasilBagi;
int main()
{
    int a, b, hasilTambah, hasilKurang, hasilKali;
    // float hasilBagi;

    cout << "bilangan pertama : ";
    cin >> a;
    cout << "bilangan kedua : ";
    cin >> b;

    // hasilTambah = jumlah(a, b);
    // hasilKurang = kurang(a, b);
    // hasilKali = kali(a, b);
    // hasilBagi = bagi(a, b);

    // cout << "hasil penjumlahanya adalah : " << hasilTambah << endl;
    // cout << "hasil pengurangannya adalah : " << hasilKurang << endl;
    // cout << "hasil perkaliannya adalah : " << hasilKali << endl;
    // cout << "hasil baginnya adalah : " << hasilBagi << endl;

    cout << "hasil penjumlahanya adalah : " << jumlah(a, b) << endl;
    cout << "hasil pengurangannya adalah : " << kurang(a, b) << endl;
    cout << "hasil perkaliannya adalah : " << kali(a, b) << endl;
    cout << "hasil baginnya adalah : " << bagi(a, b) << endl;

    cout << "default parameter function " << endl;
    tampil(2);

    return 0;
}
// fungsi tambah
int jumlah(int x, int y)
{
    return x + y;
}

// fungsi kurang
int kurang(int x, int y)
{
    return x - y;
}

// fungsi kali
int kali(int x, int y)
{
    return x * y;
}

// fungsi bagi
float bagi(int x, int y)
{
    return (float)x / y;
}

// default parameter
void tampil(int a, int b, int c)
{
    cout << " paramter ke-1 : " << a << endl;
    cout << " paramter ke-2 : " << b << endl;
    cout << " paramter ke-3 : " << c << endl;
}
