// Mencari nilai minimum dari suatu array

#include <iostream>
using namespace std;
int main () {
    // KAMUS
    int min, i;
    int TabInt[10];
    // Algoritma
    // Pengisian elemen array
    for(i=0; i<10; i++) {
        cout << "Masukan elemen ke-" << i << " : ";
        cin >> TabInt[i];
    }
	// Inisialisasi nilai minimum dengan elemen pertama array
    min = TabInt[0];
	for(i=1; i<10; i++) {
        if(TabInt[i] < min) {
            min = TabInt[i];
        }
    }
	cout << "Nilai minimum: "<< min << endl;
	return 0;
}

