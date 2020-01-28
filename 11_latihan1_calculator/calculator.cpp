#include <iostream>
using namespace std;

int main(){

	float a,b,hasil;
	char aritmatika;

	cout << "Selamat datang di program calculator \n \n";

	//memasukan inputan user
	cout << "Masukan nilai pertama : ";
	cin >> a;

	cout << "Pilih operator (+, -, /, x) : ";
	cin >> aritmatika;

	cout << "Masukan nilai kedua : ";
	cin >> b;

	if(aritmatika == '+')
	{
		hasil = a + b;

		cout << "\n Hasil perhitungan : ";
		cout << a << aritmatika << b;
		cout << " = " << hasil << endl;

	}
	else if(aritmatika == '-')
	{
		hasil = a - b;

		cout << "\n Hasil perhitungan : ";
		cout << a << aritmatika << b;
		cout << " = " << hasil << endl;

	}
	else if (aritmatika == '/')
	{
		hasil = a / b;

		cout << "\n Hasil perhitungan : ";
		cout << a << aritmatika << b;
		cout << " = " << hasil << endl;

	}
	else if (aritmatika == 'x')
	{
		hasil = a * b;

		cout << "\n Hasil perhitungan : ";
		cout << a << aritmatika << b;
		cout << " = " << hasil << endl;

	}
	else
	{
		cout << "Operator anda salah" << endl;
	}



	cin.get();
	return 0;
}

