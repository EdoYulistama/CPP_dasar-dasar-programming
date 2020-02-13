#include <iostream>
using namespace std;

int main(){

	cout << "flow 1 \n";

	for(int i = 1; i <=10; i++){

		if( i == 5){
			break;
		}
		cout << i << endl;
	}

	cout << "\n flow 2 \n";
	
	for(int i = 1; i <=10; i++){

		if( i == 5){
			continue;
		}
		cout << i << endl;
	}

	cout << "\n flow 3 \n";
	int i = 1;
	while(i <=10){
		i++;

		if( i == 5){
			continue;
		}
		cout << i << endl;
	}

	cin.get();
	return 0;
}
