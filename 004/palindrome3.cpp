/* A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers. */

#include<iostream>
#include<vector>
#include<string>

int digit;	

int isPalin(int n) {
	int rev = 0;
	int palin = n;
	
	while(n != 0) {
		digit = n % 10;
		rev = (rev * 10) + digit;
		n = n / 10;
	}
	if(palin == rev) {
		return rev;
	}
	else{
		return 0;
	}	
}

int main() {

	int product;
	int rev = 0;
	int max = 0;
	int n, i, j, iAns, jAns;

	for(i = 100; i <= 999; i++) {
		for(j = i; j <= 999; j++) {
			
			product = i * j;
			n = i * j;
			
			rev = isPalin(n);
			
			if(product == rev && max < product) {
				max = product;
				iAns = i;
				jAns = j;
				 
			} 
			
		}
		
	}
	
	std::cout << iAns << " " << jAns << " " << max << "\n";
}













