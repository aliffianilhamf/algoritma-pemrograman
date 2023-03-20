#include <iostream>

using namespace std;
// prototype fungsi
int Fpb1(int a, int b);
void Fpb2(int a, int b);
void Fpb3(int a, int b, int &fpb);
void Fpb4(int a, int b, int *fpb);
int Kpk1(int a, int b);
int Kpk2(int a, int b);
int Kpk3(int a, int b);
int main()
{

    int a, b, hasil;
    cout << "Masukkan Bilangan 1: ";
    cin >> a;
    cout << "Masukkan Bilangan 2: ";
    cin >> b;
    // memanggin fungsi Fpb1()
    hasil = Fpb1(a, b);
    cout << "Function Fpb1()" << endl;
    cout << "Fpb dari " << a << " dan " << b << " adalah " << hasil << endl;
    // memanggin fungsi Fpb2()
    cout << "Function Fpb2()" << endl;
    cout << "Fpb dari " << a << " dan " << b << " adalah ";
    Fpb2(a, b);
    // memanggin fungsi Fpb3()
    cout << "Function Fpb3()" << endl;
    Fpb3(a, b, hasil);
    cout << "Fpb dari " << a << " dan " << b << " adalah " << hasil << endl;
    // memanggin fungsi Fpb4()
    cout << "Function Fpb4()" << endl;
    Fpb4(a, b, &hasil);
    cout << "Fpb dari " << a << " dan " << b << " adalah " << hasil << endl;

    // memanggin fungsi Kpk1()
    cout << "Function Kpk1()" << endl;
    hasil = Kpk1(a, b);
    cout << "Kpk dari " << a << " dan " << b << " adalah " << hasil << endl;
    // memanggin fungsi Kpk2()
    cout << "Function Kpk2()" << endl;
    hasil = Kpk2(a, b);
    cout << "Kpk dari " << a << " dan " << b << " adalah " << hasil << endl;
    // memanggin fungsi Kpk3()
    cout << "Function Kpk3()" << endl;
    hasil = Kpk3(a, b);
    cout << "Kpk dari " << a << " dan " << b << " adalah " << hasil << endl;

    return 0;
}
// function return value
int Fpb1(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
// function void
void Fpb2(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    cout << a << endl;
}
// function void with pass by reference
void Fpb3(int a, int b, int &fpb)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    fpb = a;
}
// function void with parameter pointer
void Fpb4(int a, int b, int *fpb)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    *fpb = a;
}

// function return value with called function Fpb1();
int Kpk1(int a, int b)
{
    return a * b / Fpb1(a, b);
}
// function return value with called function Fpb3();
int Kpk2(int a, int b)
{
    int fpb;
    Fpb3(a, b, fpb);
    return a * b / fpb;
}
// function return value with called function Fpb4();
int Kpk3(int a, int b)
{
    int fpb;
    Fpb4(a, b, &fpb);
    return a * b / fpb;
}