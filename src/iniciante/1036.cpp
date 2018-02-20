#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

	double a, b, c, x1, x2;

	cin >> a >> b >> c;
	
	double delta = (b * b) - 4.0 * a * c;
	
	if (delta > 0 && (2 * a) != 0){
		x1 = (- b + sqrt(delta)) / (2.0 * a);
		x2 = (- b - sqrt(delta)) / (2.0 * a);

		cout << setprecision(5) << fixed;

		cout << "R1 = " << x1 << endl;
	       	cout << "R2 = " << x2 << endl;	
	} else 
		cout << "Impossivel calcular" << endl;
}
