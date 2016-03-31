#include <iostream>
#include <fstream>

using namespace std;

int main() {
// Kamus
    ofstream out;
    string nama;
// Algortima
    out.open("namakota.txt");
    cin >> nama;
    while(nama != "exit") {
        out << nama << endl;
        cin >> nama;
    }
    out.close();
    return 0;
}
