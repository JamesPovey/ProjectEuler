#include<iostream>
#include <cmath>

int main() {
	
	int divisor = 0;
	int i;
	int n = 0;
	int triNum = 0;
	
	while(divisor <= 500) {
		divisor = 0;
		n++;
		triNum += n;
		int sqrtSum = sqrt(triNum);
		
		for(i = 1; i <= sqrtSum; i++) {
			if(triNum % i == 0) {
				divisor += 2;
			}
		}
	}
	
	std::cout << triNum << " " << n << " " << divisor << "\n";
	
}
