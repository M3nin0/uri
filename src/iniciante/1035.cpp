#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, c, d;
	string msg = "Valores nao aceitos";

	cin >> a >> b >> c >> d;
	
	if (b > c && d > a)
		if ((c + d) > (a + b))
			if (c >= 0 && d >= 0)
				if ((a % 2) == 0)
					msg = "Valores aceitos";
	cout << msg << endl;
}
