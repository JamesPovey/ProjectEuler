#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

vector<int> digitsTimes2(vector<int> digits) {

	for(int i = digits.size() - 1; i >= 0 ; i--) {
		digits[i] *= 2;
		digits[i+1] += digits[i] / 10; // = 0 if doubling integer isn't more than 10
		digits[i] %= 10; // reduce back to single digit if above 10
	}	
	
	return digits;
}



int main() {

	vector<int> digits(350,0);
	int sum = 0;
	
	digits[0] = 1;
	
	for(int j = 0; j < 1000; j++) {
		digits = digitsTimes2(digits);
	}
	
	for(int i = 0; i < digits.size(); i++) {
		sum += digits[i];
	} 
	
	cout << sum << "\n";

	

}
