#include<iostream>
using namespace std;
int main() {
	int vize, final, ortalama;
	cout << "Vize Notu: ";
	cin >> vize;
	cout << "Final Notu: ";
	cin >> final;
	if ((vize > 100) || (vize < 0) || (final > 100) || (final < 0)) {
		cout << "\n-> Lutfen 0-100 arasinda bir not girin.\n\n";
		main();
	}
	else {
		ortalama = (vize * 0.4) + (final * 0.6);
		cout << "\nNot Ortalamaniz: " << ortalama;
		cout << "\nHarf Notu: ";
		if (ortalama >= 90) {
			cout << "AA";
		}
		else if ((ortalama >= 85) && (ortalama < 90)) {
			cout << "BA";
		}
		else if ((ortalama >= 80) && (ortalama < 85)) {
			cout << "BB";
		}
		else if ((ortalama >= 75) && (ortalama < 80)) {
			cout << "CB";
		}
		else if ((ortalama >= 70) && (ortalama < 75)) {
			cout << "CC";
		}
		else if ((ortalama >= 65) && (ortalama < 70)) {
			cout << "DC";
		}
		else if ((ortalama >= 60) && (ortalama < 65)) {
			cout << "DD";
		}
		else if ((ortalama >= 50) && (ortalama < 60)) {
			cout << "FD";
		}
		else {
			cout << "FF";
		}
	}
}