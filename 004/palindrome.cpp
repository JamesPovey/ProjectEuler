#include<iostream>
#include<vector>
#include<string>
	

int main() {

	int digit, product;
	int rev = 0;
	int n, i, j;

	for(i = 999; i >= 100; i--) {
		for(j = i; j >= 100; j--) {
			
			product = i * j;
			
			n = i * j;
			
			while(n != 0) {
				digit = n % 10;
				rev = (rev * 10) + digit;
				n = n / 10;
			}
			
			if(product == rev) {
				std::cout << i << " " << j << " " << rev << "\n";
				return 0; 
			} 
			
			rev = 0;
		}
		
	}
	
}


