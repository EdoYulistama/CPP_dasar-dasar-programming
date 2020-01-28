#include <iostream>
using namespace std;

int main(){

	float a,b,hasil;
	char aritmatika;

	cout << "Selamat datang di calculator switchcase \n \n";

	cout << "Masukan nilai pertama : ";
	cin >> a;

	cout << "Pilih operator (+, -, /, x) : ";
	cin >> aritmatika;

	cout << "Masukan nilai kedua : ";
	cin >> b;

	switch(aritmatika)
	{
		case '+':
			hasil = a+b;
			cout << "\n Hasil perhitungan ";
			cout << a << aritmatika << b;
			cout << " = " << hasil << endl;
			break;

		case '-':
			hasil = a-b;
			cout << "\n Hasil perhitungan ";
			cout << a << aritmatika << b;
			cout << " = " << hasil << endl;
			break;

		case '/':
			hasil = a/b;
			cout << "\n Hasil perhitungan ";
			cout << a << aritmatika << b;
			cout << " = " << hasil << endl;
			break;

		case 'x':
			hasil = a*b;
			cout << "\n Hasil perhitungan ";
			cout << a << aritmatika << b;
			cout << " = " << hasil << endl;
			break;
		default:
			cout << "Operator anda salah" << endl;
	}
	
	cin.get();
	return 0;
}
