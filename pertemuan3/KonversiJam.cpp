#include <iostream>

using namespace std;
// int Jam(int detik);
// int Menit(int detik);
// int Detik(int detik);

void Konversi(int detik);
int main()

{

    int detik;

    cout << "Masukkan Detik : ";
    cin >> detik;

    // jam = Jam(detik);
    // menit = Menit(detik);
    // sisaDetik = Detik(detik);
    // cout << detik << " detik sama dengan :" << endl;
    // cout << jam << " Jam " << menit << " Menit " << sisaDetik << " Detik" << endl;
    Konversi(detik);

    return 0;
}

void Konversi(int detik)
{
    int sisaDetik;
    int menit;
    int jam;
    cout << detik << " detik sama dengan :" << endl;
    // misal input detik = 100
    jam = detik / 3600;    // 100/3600 = 0 jam
    detik -= (jam * 3600); // 100 - 0 = 100 sisa detik
    menit = detik / 60;    // 100/60 = 1 menit, sisa detik = 100
    detik -= (menit * 60); // 100 - 60 = 40 sisa detik
    sisaDetik = detik;     // sisa detik = 40

    cout << jam << " Jam " << menit << " Menit " << sisaDetik << " Detik" << endl;
}
// int Jam(int detik)
// {
//     return detik / 3600;
// }
// int Menit(int detik)
// {
//     return detik / 60;
// }
// int Detik(int detik)
// {
//     return detik % 60;
// }