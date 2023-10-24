#include <iostream>

using namespace std;

int main()
{
    char nama[20], agama[20], pekerjaan[20];
    int usia;
    cout << "======================================" <<endl;
    cout << "============= BIODATA ================" <<endl;
    cout << "======================================" <<endl <<endl;
    cout << "Masukkan Nama : ";
    gets (nama);
    cout << "Masukkan Agama : ";
    gets (agama);
    cout << "Masukkan Pekerjaan : ";
    gets (pekerjaan);
    cout << "Masukkan Usia : ";
    cin >> usia;
    cout << "--------------------------------------" <<endl;
    cout << "Nama : " <<nama <<endl;
    cout << "Agama : " <<agama <<endl;
    cout << "Pekerjaan : " <<pekerjaan <<endl;
    cout << "Usia : " <<usia <<endl;

    return 0;
}
