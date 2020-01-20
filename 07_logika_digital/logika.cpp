#include <iostream>
using namespace std;

int main(){

	int a = 3;
	int b = 4;

	bool hasil;

	//operator logika : not, and, or

	// not
	cout << "hasil NOT \n";
	hasil = !(a == 3);
	cout << hasil << endl;

	// and : kedua nilai true maka hasil true
	cout << "hasil AND \n";
	hasil = (a == 3) and (b == 4); //true and true
	cout << hasil << endl;
	hasil = (a == 3) and (b == 5); //true and false
	cout << hasil << endl;
	hasil = (a == 2) && (b == 4); //false and true
	cout << hasil << endl;
	hasil = (a == 1) and (b == 6); //false and false
	cout << hasil << endl;

	// or : salah satu nilai true maka hasil true
	cout << "hasil OR \n";
	hasil = (a == 3) or (b == 4); //true and true
	cout << hasil << endl;
	hasil = (a == 3) or (b == 5); //true or false
	cout << hasil << endl;
	hasil = (a == 2) || (b == 4); //false or true
	cout << hasil << endl;
	hasil = (a == 1) || (b == 6); //false or false
	cout << hasil << endl;

	cin.get();
	return 0;
}
