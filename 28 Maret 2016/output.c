#include <iostream>
#include <fstream>
using namespace std;

int main () {
// KAMUS
    ifstream in;
    String nama;

// ALGORITMA
    in.open("namakota.txt");
    while (!in.eof()) {
         in_stream >> nama;
         cout << nama << endl;
    }
    in.close();
    return 0;
}
