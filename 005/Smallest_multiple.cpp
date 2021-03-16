/* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20? */

#include<iostream>

int main() {

	int ans = 1;
	bool brk = false;

	while(brk == false) {
		for(int i = 1; i<= 20; i++) {
			if(ans % i != 0) {
				ans++;
				break;
			}
			if(i == 20) {
				brk = true;
			}
		}
	}
	
	std::cout << ans << "\n";

}
