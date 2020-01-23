#include <iostream>
using namespace std;

int main(){
	int a;

	cout << "Masukan Angka = ";
	cin >> a ;

	
	if(a == 3)
	{
		cout << "Nilai adalah 3" << endl;
	}
	else if(a == 5)
	{
		cout << "Nilai adalah 5" << endl;
	}
	else if(a == 1)
	{
		cout << "Nilai adalah 1" << endl;
	}
	else
	{
		cout << "Nilai buka 3, 5 atau 1" << endl;
	}
	cin.get();
	return 0;
}
