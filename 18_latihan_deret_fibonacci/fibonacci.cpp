#include <iostream>
using namespace std;

int main(){

	// fn = f_n1 + f_n2

	int n;
	int fn;
	int f_n1;
	int f_n2;
	
	cout << "Program Deret Fibonacci \n";
	cout << "Masukan nilai ke-n: ";
	cin >> n ;

	f_n1 = 1;
	f_n2 = 0;

	fn = f_n1 + f_n2;
	cout << fn << " " ;

	for(int i = 1; i < n; i++){
		fn = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = fn;

		cout << fn << " " ;
	}

	cin.get();
	return 0;
}
