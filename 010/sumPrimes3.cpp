#include <iostream>
#include <math.h>

int main() {

	bool check = true;
	long sumPrime = 17;
	
	for(int i = 3; i < 2000000; i++) {
		if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0) {
			for(int j = 2; j <= sqrt(i); j++) {
				if(i % j == 0) {
					check = false;
				}
			}
			
			if(check == true) {
				sumPrime += i;
			}
		}
		check = true;
	}
	std::cout << sumPrime << "\n";
	
	
}
