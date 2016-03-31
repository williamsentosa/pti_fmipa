#include <iostream>
#include <fstream>
using namespace std;

int main () {
// KAMUS
    ifstream in_stream;
    float luas;  // variable utk luas kec yg sdg dibaca
    float luaskab; // variable utk luas kabupaten total

// ALGORITMA
    in_stream.open("datakecamatan.dat");
    luaskab = 0; //inisialisasi
    while (!in_stream.eof()) {
         in_stream >> luas;
         luaskab = luaskab + luas;
    }
    cout << "Luas wilayah kabupaten Bandung tahun 2009 adalah " << luaskab << " hektar";
    in_stream.close();
    return 0;
}
