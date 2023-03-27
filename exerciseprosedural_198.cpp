

#include <iostream>
using namespace std;

float nilaimatematika(float a, float t) {
	return 70 * a * t;
}
float nilaibahasainggris(float r) {
	return 80 * r * r;
}
switch (pilihan) {
case 1:
	cout << "Menghitung nilai rata rata matematika" << endl;
	cout << "nilai tes matematika" << endl;
	cin >> nilai;
	cout << "nilai < 70" << endl;
	cin >> lulus;
	cout << "nilai > 70 = " << endl;
	cin >> tidak lulus;
	break;
case 2:
	cout << "menghitung nilai rata rata bahasa inggris = " << endl;
	cout << "nilai tes bahasa inggris" << endl;
	cin >> nilai;
	cout << "nilai > 80  " << endl;
	cin >> lulus;
	cout << "nilai < 80" << endl;
	cin >> tidak lulus;
	break;
}






