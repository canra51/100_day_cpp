#include <iostream>
using namespace std;
int main() {
	double A, B, hasil;
	
	cout << "Masukkan A: ";
	cin >> A;
	cout << "Masukkan B: ";
	cin >> B;
	
	double tambah = A + B;
	double kurang = A - B;
	double perkalian = A * B;
	double bagi = A / B;
	
	
	cout << "\nHasil penjumlahan:" << tambah << endl;
	cout << "Hasil pengurangan " << kurang << endl;
	cout << "Hasil perkalian :" << perkalian << endl;
	cout << "Hasil pembagian :" << bagi << endl;
	
	return 0;
}