#include <iostream>
#include <fstream>

using namespace std;

int main() {
// Kamus
    ofstream out_stream;
    int nr;
// Algortima
    out_stream.open("datanilai.dat");
    cin >> nr;
    while(nr != -999) {
        out_stream << nr << endl;
        cin >> nr;
    }
    out_stream.close();
    return 0;
}
