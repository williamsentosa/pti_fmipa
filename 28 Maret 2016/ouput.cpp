#include <iostream>
#include <fstream>
using namespace std;

int main () {
// KAMUS
    ifstream in;
    string nama;
    int a;
// ALGORITMA
    in.open("namakota.txt");
    while (!in.eof()) {
         nama = ""; //reset isi nama
         in >> nama;
         cout << nama << endl;
         cin >> a;
    }
    in.close();
    return 0;
}
