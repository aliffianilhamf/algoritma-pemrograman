#include <iostream>

using namespace std;

// Tersedia untuk semua program diluar atau di dalam fungsi
int globalVariable;

void tampil()
{
    // TiIDAK ada nilai default
    // Hanya tersedia didalam blok fungsi/prosedur

    int localVariable;
    cout << "tampil : " << localVariable << " " << globalVariable << endl;
}
void StaticVariable()
{
    static int var = 0;
    cout << " Static var = " << var << endl;
}
int main()
{
    // TiIDAK ada nilai default
    // Hanya tersedia didalam blok fungsi/prosedur

    int localVariable = 1;
    cout << "Main : " << localVariable << " " << globalVariable << endl;
    globalVariable = 1;
    tampil();

    StaticVariable();
    StaticVariable();
    StaticVariable();

    return 0;
}