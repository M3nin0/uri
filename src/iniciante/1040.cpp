#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float  n1, n2, n3, n4, exame, media;
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / (2 + 3 + 4 + 1);
	cout << setprecision(1) << fixed;
	
	if (media >= 7.0) {
		cout << "Media: " << media << "\nAluno aprovado." << endl;
	} else if (media >= 5.0 && media <= 6.9) {
		cout << "Media: " << media << endl;
		cout << "Aluno em exame." << endl;
		cin >> exame;
		
		cout << "Nota do exame: " << exame << endl;
		
		media = (media + exame) / 2;
		
		if (media >= 5.0) {
			cout << "Aluno aprovado." << "\nMedia final: " << media << endl;
		} else {
			cout << "Aluno reprovado." << "\nMedia final: " << media << endl;
		}
	} else {
		cout << "Media: " << media << endl;
		cout << "Aluno reprovado." << endl;
	}
}
