// Tanggal : 29 - 02 - 2016
// Menulis sekumpulan perintah dengan menggunakan prosedur

#include <iostream>
using namespace std;

void Print1(string variableString, string * output) {
    *output = variableString + " teman saya ";
    cout << "Hello, " << *output << endl;
    cout << "Selamat pagi, " << *output << endl;
    cout << variableString << ", sedang apa ? " << endl;
    cout << "Selamat tinggal, " << variableString << endl;
}

int main() {
    string nama, dummy, namaKeluar;
    cin >> nama;
    Print1(nama, &namaKeluar);
    cout << namaKeluar <<endl;
    cin >> dummy;
    Print1(namaKeluar, &namaKeluar);
    cout << namaKeluar <<endl;
    cin >> dummy;
    Print1(namaKeluar, &namaKeluar);
    cout << namaKeluar << endl;
    return 0;
}
