#include <iostream>
#include <cstdlib>
#include <ctime>

/*
    Nama : Mamet Adil Araaf
    Nim  : A11.2017.10656
*/
using namespace std;

int main()
{
    int angka,jawab,tebak;

    cout << "Masukkan angka antara (10-100) = ";
    cin >> angka;
    cout << "Silahkan Tebak nilai antara 0 sampai " << angka;
    srand(time(0));
    jawab = rand() % angka;
    cout <<  "\nCheat" <<" "<< jawab;

    int nyawa =3;
    for (int i =1; i<=nyawa;i++){
        cout << "\nMasukkan tebakan anda : ";
        cin >> tebak;
            if (tebak > jawab){
                cout << "Jawaban Anda Terlalu Besar ";
                cout << "Sisa Nyawa adalah " << nyawa-i;
            }
            else if (tebak < jawab){
                cout << "Jawaban Anda Terlalu Kecil ";
                cout << "Sisa Nyawa adalah " << nyawa-i;
            }
            else if (tebak == jawab){
                cout << "Jawaban Anda Benar";
                return 0;
            }
    }
    return 0;
}
