/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number? */

#include <iostream>

int main() {
	
	int n = 2;
	int prime = 2;
	
	while(n != 10001) {
		prime++;	
		for(int i = 2; i <= prime/2; i++) {
			if(prime % i == 0) {
				break;
			}
			if(i == prime/2) {
				n++;
			}
		}
	}
	std::cout << prime <<"\n";
}
