#include <iostream>
#include <limits>
using namespace std;

int main(){

	// bilangan bulat
	unsigned int a = 2;
	long b = 7;
	short c = 9;

	//bilangan desimal
	float d = 1.8;
	double e = 2.9;

	//character
	char f = 'a';

	// bolean
	bool g = true; // true/false

	cout << b << endl;
	cout << sizeof(b) << "byte" << endl;
	cout << numeric_limits<unsigned int>::max() << endl;
	cout << numeric_limits<long>::min() << endl;
	cin.get();
	return 0;
}