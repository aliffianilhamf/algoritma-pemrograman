#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char nama[50], alamat[50];

    printf("Masukkan nama anda : ");
    scanf("%s", &nama);
    printf("Masukkan alamat : ");
    scanf("%s", &alamat);

    // strupr(string) : to UPPERCASE
    strupr(nama);
    // strlwr(string) : to LOWERCASE
    strlwr(alamat);

    printf("%s\n", nama);
    printf("%s\n", alamat);

    // strcat(tujuan,sumber) : Menggabungkan string
    printf(strcat(nama, alamat));
    // strlen(string) : menghitung banyak karakter
    int karakter = strlen(strcat(nama, alamat));
    printf("\nbanyaknya karakter adalah %d\n", karakter);

    // islower(char) : akan menghasilkan nilai true(bukan nol) jika karakter huruf kecil
    // isdigit(char) : menghasilkan nilai benar (bukan nol) jika karakter merupakan sebuah digit.
    // tolower(char) : Fungsi akan mengubah huruf capital menjadi huruf kecil.
    // toupper(char) : Fungsi akan mengubah huruf kecil menjadi huruf kapital.

    char cth;
    printf("Masukkan karakter : ");
    scanf("%s", &cth);

    if (islower(cth))
    {
        printf("ini adalah huruf kecil %c\n", cth);
        printf("kalau di jadikan uppercase maka seperti ini : %c\n", toupper(cth));
    }
    else if (isupper(cth))
    {
        printf("ini adalah huruf besar %c\n", cth);
        printf("kalau di jadikan lowercase maka seperti ini : %c\n", tolower(cth));
    }
    else if (isdigit(cth))
    {
        printf("\nIni adalah hasil digitnya : %d\n", isdigit(cth));
    }

    int bilangan, pangkat;

    cout << "Masukkan bilangan akar : ";
    cin >> bilangan;
    cout << "Masukkan pangkatnya : ";
    cin >> pangkat;

    cout << " akar dari " << bilangan << " adalah " << sqrt(bilangan) << endl;
    cout << bilangan << " pangkat " << pangkat << " adalah : " << pow(bilangan, pangkat);

    return 0;
}