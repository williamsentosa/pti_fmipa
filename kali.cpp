// Tanggal 15 - 02 - 2016
// Menghitung perkalian dua bilangan dengan menggunakan looping
// Prekondisi : masukan selalu bilangan positif
#include <iostream>
using namespace std;

int main () {
	int a,b,sum;
	cout << "Masukan bilangan 1 : "; 
	cin >> a;
	cout << "Masukan bilangan 2 : "; 
	cin >> b;	
	for(int i=0; i<b; i++) {
		sum = sum + a;
	}
	cout << "Jumlah : " << sum << endl;
	return 0;
}