#include <iostream>

using namespace std;

void tampil(int x);
void referenceFunc(int &x);
void constParameter(int const x);
void constRefParameter(int const &x);
void pointerParameter(int *x);

int main()
{

    int a = 2;
    int refFunc = 5;
    int consParameter = 10;
    int consRefParameter = 15;
    int pointerParameter = 20;
    tampil(a);
    cout << "ini adalah nilai dari variabel a : " << a << endl;

    referenceFunc(refFunc);
    cout << "ini adalah nilai dari variabel a : " << refFunc << endl;

    constParameter(consParameter);
    cout << "ini adalah nilai dari variabel a : " << consParameter << endl;

    constRefParameter(consRefParameter);
    cout << "ini adalah nilai dari variabel a : " << consRefParameter << endl;

    // pointerParameter(pointerParameter);
    cout << "ini adalah nilai dari variabel a : " << pointerParameter << endl;

    return 0;
}
// Value parameter
// pass by value - sebuah copy dari parameter dibuat;

void tampil(int x)
{
    x++;
    cout << "ini adalah nilai dari fungsi tampil : " << x << endl;
}

// reference parameter
// pass by reference - parameter itu sendiri yang diteruskan, gunakan operator referensi "&";
void referenceFunc(int &x)
{
    x++;
    cout << "ini adalah nilai dari fungsi referenceFunc : " << x << endl;
}

// constant parameter
// Sebuah copy parameter dibuat dan dia saat ketat seperti konstanta (tidak bisa dirubah).
void constParameter(int const x)
{
    // x++; // eror
    cout << "ini adalah nilai dari fungsi costParameter : " << x << endl;
}

// Pass-by-ref
// Sebetulnya parameter itu sendiri yang diteruskan tetapi hindari modifikasi
void constRefParameter(int const &x)
{
    // x++; //error
    cout << "ini adalah nilai dari fungsi constRefParameter : " << x << endl;
}

// pointer parameter
// Secara umum, Pass-by-value
// Suatu copy dari parameter di buat
// Nilai dari parameter merupakan suatu alamat blok memory
// Nilai dari parameter tidak akan berubah,
// Tapi blok memory yang dituntuk oleh parameter dapat dimodifikasi.
void pointerParameter(int *x)
{
    x++;
    cout << "ini adalah nilai dari fungsi pointerParameter : " << x << endl;
}
