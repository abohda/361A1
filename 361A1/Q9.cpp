#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

float harmonicSum(int N) {
	float sum = 0;
	for (float k = 1; k <= N; k++) {
		sum += (1 / k);
		if (fmod(k, 1000000) == 0) cout << sum << endl;
	}
	return sum;
}

//int main() {
//	int N, n;
//	char cont;
//	while (true) {
//		cout << "Enter a value for n: " << endl;
//		cin >> n;
//		N = pow(10, n);
//		cout << "Computing harmonic sum for N = " << N << "..." << endl;
//		cout << "Harmonic sum = " << harmonicSum(N) << endl;
//		cout << "Continue? y/n" << endl;
//		cin >> cont;
//		if (cont == 'n') break;
//	}
//
//	return 0;
//}