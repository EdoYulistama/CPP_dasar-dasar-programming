#include <iostream>
using namespace std;

int main(){

	//assigmnet
	int a = 10;

	cout << "nilai awal a adalah " << a << endl;

	//assigment operator
	//variabel = variabel operator ekspresi

	a +=3;
	cout << "ditambah 3 menjadi " << a << endl;

	a -=3;
	cout << "dikurangi 3 menjadi " << a << endl;

	a /=3;
	cout << "dibagi 3 menjadi " << a << endl;

	a *=3;
	cout << "dikali 3 menjadi " << a << endl;

	a %=3;
	cout << "modulus 3 menjadi " << a << endl;

	cin.get();
	return 0;
}

