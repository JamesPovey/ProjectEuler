#include<iostream>
#include<vector>
#include<string>
	

int main() {

	int digit, product;
	int rev = 0;
	int max = 0;
	int n, i, j, iAns, jAns;

	for(i = 100; i <= 999; i++) {
		for(j = i; j <= 999; j++) {
			
			product = i * j;
			
			n = i * j;
			
			while(n != 0) {
				digit = n % 10;
				rev = (rev * 10) + digit;
				n = n / 10;
			}
			
			if(product == rev && max < product) {
				max = product;
				iAns = i;
				jAns = j;
				 
			} 
			
			rev = 0;
		}
		
	}
	
	std::cout << iAns << " " << jAns << " " << max << "\n";
}


