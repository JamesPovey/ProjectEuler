#include<iostream>
#include<cmath>

using namespace std;

int main() {

	long n = 1;
	int digit, sum = 0;

	for(int i = 1; i <= 15; i++) {
		n = 2 * n;
	}
	
	int digitNo = log10(n) + 1; 

	for(int i = 0; i < digitNo; i++) {
		digit = n % 10;
		sum += digit;
		n = n / 10;
		
	}

	cout << sum << "\n";

}
