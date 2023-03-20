#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
// int Bmi(int beratBadan, int tinggiBadan);
void TerlaluKurus(float beratBadan, float tinggiBadan, float bmi);
void Normal(float beratBadan, float tinggiBadan, float bmi);
void PraObesitas(float beratBadan, float tinggiBadan, float bmi);
void ObesitasTingkat1(float beratBadan, float tinggiBadan, float bmi);
void ObesitasTingkat2(float beratBadan, float tinggiBadan, float bmi);
void ObesitasTingkat3(float beratBadan, float tinggiBadan, float bmi);
int main()
{
    float beratBadan;
    float tinggiBadan;
    float bmi;

    cout << "Masukkan Berat Badan Anda (kg) : ";
    cin >> beratBadan;
    cout << "Masukkan Tinggi Badan Anda (cm) : ";
    cin >> tinggiBadan;

    tinggiBadan = tinggiBadan / 100;

    bmi = beratBadan / pow(tinggiBadan, 2);

    if (bmi < 18.5)
    {
        TerlaluKurus(beratBadan, tinggiBadan, bmi);
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        Normal(beratBadan, tinggiBadan, bmi);
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        PraObesitas(beratBadan, tinggiBadan, bmi);
    }
    else if (bmi >= 30 && bmi <= 34.9)
    {
        ObesitasTingkat1(beratBadan, tinggiBadan, bmi);
    }
    else if (bmi >= 35 && bmi <= 39.9)
    {
        ObesitasTingkat2(beratBadan, tinggiBadan, bmi);
    }
    else
    {
        ObesitasTingkat3(beratBadan, tinggiBadan, bmi);
    }

    return 0;
}
void TerlaluKurus(float beratBadan, float tinggiBadan, float bmi)
{
    cout << "Berat Badan = " << beratBadan << " Kg" << endl;
    cout << "Tinggi Badan = " << tinggiBadan << " m" << endl;
    cout << "Maka BMI = " << beratBadan << " / " << tinggiBadan << "^2 = " << beratBadan << " / " << pow(tinggiBadan, 2) << " = " << bmi << endl;
    cout << "Terlalu Kurus";
}
void Normal(float beratBadan, float tinggiBadan, float bmi)
{
    cout << "Berat Badan = " << beratBadan << " Kg" << endl;
    cout << "Tinggi Badan = " << tinggiBadan << " m" << endl;
    cout << "Maka BMI = " << beratBadan << " / " << tinggiBadan << "^2 = " << beratBadan << " / " << pow(tinggiBadan, 2) << " = " << bmi << endl;
    cout << "normal";
}
void PraObesitas(float beratBadan, float tinggiBadan, float bmi)
{
    cout << "Berat Badan = " << beratBadan << " Kg" << endl;
    cout << "Tinggi Badan = " << tinggiBadan << " m" << endl;
    cout << "Maka BMI = " << beratBadan << " / " << tinggiBadan << "^2 = " << beratBadan << " / " << pow(tinggiBadan, 2) << " = " << bmi << endl;
    cout << "Pra-Obesitas";
}
void ObesitasTingkat1(float beratBadan, float tinggiBadan, float bmi)
{
    cout << "Berat Badan = " << beratBadan << " Kg" << endl;
    cout << "Tinggi Badan = " << tinggiBadan << " m" << endl;
    cout << "Maka BMI = " << beratBadan << " / " << tinggiBadan << "^2 = " << beratBadan << " / " << pow(tinggiBadan, 2) << " = " << bmi << endl;
    cout << "Obesitas tingkat I";
}
void ObesitasTingkat2(float beratBadan, float tinggiBadan, float bmi)
{
    cout << "Berat Badan = " << beratBadan << " Kg" << endl;
    cout << "Tinggi Badan = " << tinggiBadan << " m" << endl;
    cout << "Maka BMI = " << beratBadan << " / " << tinggiBadan << "^2 = " << beratBadan << " / " << pow(tinggiBadan, 2) << " = " << bmi << endl;
    cout << "Obesitas Tingkat II";
}
void ObesitasTingkat3(float beratBadan, float tinggiBadan, float bmi)
{
    cout << "Berat Badan = " << beratBadan << " Kg" << endl;
    cout << "Tinggi Badan = " << tinggiBadan << " m" << endl;
    cout << "Maka BMI = " << beratBadan << " / " << tinggiBadan << "^2 = " << beratBadan << " / " << pow(tinggiBadan, 2) << " = " << bmi << endl;
    cout << "Obesitas Tingkat III";
}
/*
int Bmi(int beratBadan, int tinggiBadan)
{
    return (float) beratBadan / pow(tinggiBadan, 2);
}
*/
