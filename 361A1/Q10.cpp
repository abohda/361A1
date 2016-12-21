#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

float computexk(float x0, int k, float* values) {
	float value;
	if (k == 0) value = x0;
	else value = (pow(computexk(x0, k - 1, values), 2) + 5) / (2 * computexk(x0, k - 1, values));
	values[k] = value;
	return value;
}

void sequence(float x0, int k) {
	float* values = new float[k];
	computexk(x0, k, values);
	for (int i = 0; i < k; i++) {
		cout << "x" << i+1 << " = " << values[i] << endl;
	}
}

int main() {
	int k;
	float x0;
	char cont;
	while (true) {
		cout << "Enter a value for x0: " << endl;
		cin >> x0;
		cout << "Enter a value for k: " << endl;
		cin >> k;
		cout << "Computing sequence for k = " << k << "..." << endl;
		sequence(x0, k);
		cout << "Continue? y/n" << endl;
		cin >> cont;
		if (cont == 'n') break;
	}
	
	return 0;
}