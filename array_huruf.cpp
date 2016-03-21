// Menghitung jumlah huruf A
// Tanggal : 7 Maret 2016

#include <iostream>
using namespace std;

int  main() {
    char tabHuruf[10];
    int i, countHuruf;
    for(i=0; i<10; i++) {
        cout << "Elemen ke-" << i << " : ";
        cin >> tabHuruf[i];
    }
    cout << "***Elemen array***" << endl;
    for(i=0; i<10; i++) {
        cout << tabHuruf[i] << endl;
    }
    countHuruf = 0;
    for(i=0; i<10; i++) {
        if(tabHuruf[i] == 'A') {
            countHuruf++;
        }
    }
    cout << "Jumlah huruf A : " << countHuruf << endl;
    return 0;
}
