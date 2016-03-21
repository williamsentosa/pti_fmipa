// Menghitung jumlah elemen matriks, jumlah elemen yang genap, dan jumlah elemen yang ganjil
// Tanggal : 21 Maret 2016

#include <iostream>
using namespace std;

int main() {
    int M[10][10];
    int NBrs, NKol, i, j, NElement, NGanjil, NGenap;
    cout << "Jumlah Baris : ";
    cin >> NBrs;
    cout << "Jumlah Kolom : ";
    cin >> NKol;
    // Pengisian Array
    for(i=0; i<NBrs; i++) {
        for(j=0; j<NKol; j++) {
            cout << "Elemen ke-[" << i << "][" << j << "] = ";
            cin >> M[i][j];
        }
    }

    // Menghitung banyak elemen matriks, jumlah genap dan jumlah ganjil
    NElement = NBrs * NKol;
    NGanjil = 0;
    NGenap = 0;
    for(i=0; i<NBrs; i++) {
        for(j=0; j<NKol; j++) {
            if(M[i][j] % 2 == 0) {
                NGenap++;
            } else {
                NGanjil++;
            }
        }
    }

    // Menampilkan isi Array
    cout << "*** Isi Matriks ***" << endl;
    for(i=0; i<NBrs; i++) {
        for(j=0; j<NKol; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }

    // Menampilkan hasil
    cout << "Banyaknya Jumlah Element : " << NElement << endl;
    cout << "Banyaknya Jumlah Element Genap : " << NGenap << endl;
    cout << "banyaknya Jumlah Element Ganjil : " << NGanjil << endl;
}
