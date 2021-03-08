#include <iostream>

int main() {

	bool check = true;
	long sumPrime = 2;
	
	for(int i = 3; i < 2000000; i++) {
		for(int j = 2; j <= i/2; j++) {
			if(i % j == 0) {
				check = false;
			}
		}
		if(check == true) {
			sumPrime += i;
		}
		check = true;
	}
	
	std::cout << sumPrime << "\n";
	
	
}
