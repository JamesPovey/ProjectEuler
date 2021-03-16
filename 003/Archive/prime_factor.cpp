#include<iostream>
#include<vector>

int main() {
	
	long n = 600851475143;
	long max;
	bool isPrime = true;
	
	for(long i = 3; i < n/2; i++) {
		// Check if number i is prime
		for(long j = 2; j < i; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
			
		if (isPrime == true && n % i == 0) {
			max = i;
		}
		
	isPrime = true;
	
	}
	
	std::cout << max << "\n";
}
