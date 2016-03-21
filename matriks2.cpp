// Menghitung pertambahan matriks
// Tanggal : 21 Maret 2016

#include <iostream>
using namespace std;

int main() {
    int M1[10][10];
    int M2[10][10];
    int Mhasil[10][10];
    int NBrs, NKol, i, j;
    cout << "Jumlah Baris : ";
    cin >> NBrs;
    cout << "Jumlah Kolom : ";
    cin >> NKol;
    // Pengisian Array
    cout << "*** Isi matriks pertama ***" << endl;
    for(i=0; i<NBrs; i++) {
        for(j=0; j<NKol; j++) {
            cout << "Elemen ke-[" << i << "][" << j << "] = ";
            cin >> M1[i][j];
        }
    }
    cout << "*** Isi matriks kedua ***" << endl;
    for(i=0; i<NBrs; i++) {
        for(j=0; j<NKol; j++) {
            cout << "Elemen ke-[" << i << "][" << j << "] = ";
            cin >> M2[i][j];
        }
    }
    // Menjumlah matriks
    for(i=0; i<NBrs; i++) {
        for(j=0; j<NKol; j++) {
            Mhasil[i][j] = M1[i][j] + M2[i][j];
        }
    }

    // Menampilkan isi Matriks setelah penambahan
    cout << "*** Isi Matriks Pertama***" << endl;
    for(i=0; i<NBrs; i++) {
        for(j=0; j<NKol; j++) {
            cout << M1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "*** Isi Matriks Kedua***" << endl;
    for(i=0; i<NBrs; i++) {
        for(j=0; j<NKol; j++) {
            cout << M2[i][j] << " ";
        }
        cout << endl;
    }

    cout << "*** Isi Matriks Penambahan***" << endl;
    for(i=0; i<NBrs; i++) {
        for(j=0; j<NKol; j++) {
            cout << Mhasil[i][j] << " ";
        }
        cout << endl;
    }
}
