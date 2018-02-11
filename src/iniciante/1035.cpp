#include <iostream>
#include <cmath>

using namespace std;

int maior(int x, int y) {
	return (x + y + abs(x - y)) / 2;	
}

bool parPositivo(int x, int y) {
	bool par = false;
	if (((x % 2 == 0)) and x >= 0)
		par = true;
	else if (((y % 2) == 0) and y >= 0)
		par = true;
	
	return par;
}

int main() {
	int a, b, c, d;
	int maiorBC, maiorDA, somaCD, somaAB;

	cin >> a >> b >> c >> d;
	maiorBC = maior(b, c); maiorDA = maior(d, a); 
	somaCD = c + d; somaAB = a + b; 
	
	if (parPositivo(c, d)) {
		if (maiorBC == b and maiorDA == d and somaCD > somaAB) 
			cout << "Valores aceitos" << endl;
		else 
			cout << "Valores nao aceitos" << endl;
	} else 
		cout << "Valores nao aceitos" << endl;

}
