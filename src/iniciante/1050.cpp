#include <iostream>
#include <map>

using namespace std;

int main() {
	
	int index;

	map<int, string> x;
	string search = "";

	x[61] = "Brasilia"; 
	x[71] = "Salvador";
	x[11] = "Sao Paulo";
	x[21] = "Rio de Janeiro";
	x[32] = "Juiz de Fora";
	x[19] = "Campinas";
	x[27] = "Vitoria";
	x[31] = "Belo Horizonte";

	cin >> index;

	search = x[index];
	
	if (search.compare("") == 0) 
		cout << "DDD nao cadastrado" << endl;
	else
		cout << search << endl;
	
}
