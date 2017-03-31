#include <iostream>
using namespace std;

int perbandingan ( int a, int b);

int main () {
	int nilai1,nilai2;
	cout << " masukkan nilai A : " ;
	cin >> nilai1;
	cout << " masukkan nilai B : " ;
	cin >> nilai2;
	cout << "nilai maksimum adalah : " << perbandingan (nilai1, nilai2);
}

int perbandingan(int a, int b){
	return max(a,b);
}
