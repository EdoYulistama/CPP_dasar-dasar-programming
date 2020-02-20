#include <iostream>
using namespace std;

// reporter
int kuadrat(int x){ //fungsi kembalian
	int y;
	y = x * x;
	return y;
}

// worker
void tampilkan(int input){

	cout <<"Menampilkan dengan void \n";
	cout << input << endl; 
}

int main(){
	int input,hasil;

	// s.kuadrat fungsi
	cout << "Masukan kuadrat dari : ";
	cin >> input;
	
	hasil = kuadrat(input);
	tampilkan(hasil);
	// e.kuadrat fungsi

	cin.get();
	return 0;
}
