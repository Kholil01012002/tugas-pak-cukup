#include<iostream>
using namespace std;

int main() {
	
	int pola;
	cout << "Masukan jumlah baris : ";
	cin >> pola;
	
	for (int i = 1; i <= pola; i++) {
		
		for (int j = pola; j >= i; j--){
			cout << " ";
		}
		for (int k = 1; k <= (2 * i - 1); k++){
			cout <<"*";
		}
		
		cout << endl;
	}
	
	for (int a = 1; a <= pola; a++){
		
		for (int b = 1; b <= a; b++) {
			cout << " ";
		}
		for (int c = pola; c >= (2 * a - pola); c--) {
			cout << "*";
		}
		
		cout << endl;
	}
	
	return 0;
}


