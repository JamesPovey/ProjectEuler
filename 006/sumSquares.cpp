#include <iostream>

int main() {

	int sumSquare = 0;
	int squareSum = 0;
	int ans;
	
	for(int i = 1; i <= 100; i++) {
		sumSquare += i*i;
	}
	
	for(int i = 1; i <= 100; i++) {
		squareSum += i;
	}
	
	squareSum = squareSum * squareSum;
	
	ans = squareSum - sumSquare;
	
	std::cout << ans << "\n";
}
