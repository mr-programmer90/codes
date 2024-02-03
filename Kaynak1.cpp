#include <iostream>
using namespace std;


int main() {
	char simge;
	float s1, s2, sonuc;
	cout << "Birinci sayiyi girin: ";
	cin >> s1;
	cout << "ikinci sayiyi girin: ";
	cin >> s2;
	cout << "Yapmak istediginiz islemi girin(+,-,*,/) ";
	cin >> simge;

	switch (simge) {

	case '+':
		sonuc = s1 + s2;
		cout << sonuc;
		break;

	case '-':
		sonuc = s1 - s2;
		cout << sonuc;
		break;

	case '*':
		sonuc = s1 * s2;
		cout << sonuc;
		break;

	case '/':
		sonuc = s1 / s2;
		cout << sonuc;
		break;

	default:
		cout << "Hatali giris";
	}


	return 0;
}
