// tangggal 22 - 02 - 2006
// Menghitung sisa bagi dari dua bilangan dengan menggunakan looping dan fungsi
// Prekondisi : bilangan selalu positif.
#include <iostream>
using namespace std;

// Deklarasi Fungsi
int SisaBagi(int x1, int x2);


int main() {
    int a,b;
    cout << "Masukan bilangan pertama : ";
    cin >> a;
    cout << "Masukan bilangan kedua : ";
    cin >> b;
    cout << SisaBagi(a,b) << endl;
    cout << "Masukan bilangan pertama : ";
    cin >> a;
    cout << "Masukan bilangan kedua : ";
    cin >> b;
    cout << SisaBagi(a,b) << endl;
    return 0;
}

//Realisasi Fungsi
int SisaBagi(int x1, int x2) {
    int temp;
    temp = x1;
    while ( temp >= x2) {
        temp = temp - x2;
    }
    return temp;
}
