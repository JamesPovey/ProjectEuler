#include <iostream>

int isPrime(int n) {

	int prime = n;
	bool check = true;

	for(int i = 2; i <= prime/2; i ++) {
		if(prime % i == 0) {
			check = false;
		}
	}
	
	if(check == false) {
		return 0;
	}
	else {
		return prime;
	}
}

int main() {

	long sumPrime = 2;
	
	for(int i = 3; i < 2000000; i++) {
		sumPrime += isPrime(i);
	}
	
	std::cout << sumPrime << "\n";
	
	
}
