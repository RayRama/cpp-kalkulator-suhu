#include <iostream>
using namespace std;

int main(){

	int pilihan, pilihanKonversi;
	float suhu, c, f, r, k, hasilC, hasilF, hasilR, hasilK;

	cout << "Masukan nilai suhu: ";
	cin >> suhu;

	cout << "Pilih suhu yang akan dikonversi: " << endl << endl;
	cout << "1. Celcius" << endl << "2. Kelvin" << endl << "3. Farenheit" << endl << "4. Reamur" << endl << endl;
	cout << "Pilihan: ";
	cin >> pilihan;

	switch(pilihan){
		
		case 1:
			cout << "1. Celcius ke Kelvin" << endl << "2. Celcius ke Farenheit" << endl << "3. Celcius ke Reamur" << endl << endl;
			cout << "Pilihan konversi: ";
			cin >> pilihanKonversi;

			switch(pilihanKonversi){
				case 1:
					hasilC = suhu + 273.15;
					cout << "Suhu " << suhu << "\370C = " << hasilC << "\370K" << endl;
					break;
				case 2:
					hasilF = suhu * 1.8 + 32;
					cout << "Suhu " << suhu << "\370C = " << hasilF << "\370F" << endl;
					break;
				case 3:
					hasilR = suhu * 0.8;
					cout << "Suhu " << suhu << "\370C = " << hasilR << "\370R" << endl;
					break;
				default: cout << "salah";
			}
			break;

		case 2:
			cout << "1. Kelvin ke Celcius" << endl << "2. Kelvin ke Farenheit" << endl << "3. Kelvin ke Reamur" << endl << endl;
			cout << "Pilihan konversi: ";
			cin >> pilihanKonversi;
			switch(pilihanKonversi){
				case 1:
					hasilC = suhu - 273.15;
					cout << "Suhu " << suhu << "\370K = " << hasilC << "\370C" << endl;
					break;
				case 2:
					hasilF = (suhu - 273.15) * 1.8 + 32;
					cout << "Suhu " << suhu << "\370K = " << hasilF << "\370F" << endl;
					break;
				case 3:
					hasilR = (suhu - 273.15) * 0.8;
					cout << "Suhu " << suhu << "\370K = " << hasilR << "\370R" << endl;
					break;
				default: cout << "salah";
			}
			break;

		default: cout << "salah";
	}



	cin.get();
	cin.get();
	return 0;



}

