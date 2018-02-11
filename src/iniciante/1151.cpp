#include <iostream>

using namespace std;

int main() {

	int value, a = 0, b = 1, seq;

	cin >> value;

	cout << a << " " << b;	
	for (int i = 2; i < value; i++) {
		seq = a + b;
		cout << " " << seq ;
		a = b;
		b = seq;
	}
	cout << endl;
	
}
