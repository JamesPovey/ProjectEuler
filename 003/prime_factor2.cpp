/* The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ? */

#include<iostream>
#include<vector>

bool isPrime(long number) {

	bool prime = true;
	
	for(long j = 2; j * j < number; j++) {
		if (number % j == 0) {
			prime = false;
			break;
		}
		
	}
	
	return prime;
}
	

int main() {
	
	long n = 600851475143;
	long max;
	
	for(long i = 3; i * i < n; i++) {
		// Check if number i is prime
		if(isPrime(i) == true && n % i == 0) {
			max = i;
		}
	
	}
	
	std::cout << max << "\n";
}


