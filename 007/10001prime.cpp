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
