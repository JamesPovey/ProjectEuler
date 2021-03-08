#include <iostream>
#include <math.h>


int isPythag(int a, int b) {
	
	int n = (a*a) + (b*b);
	float c = sqrt(n);
	
	if(c == floor(c)) {
		return c;
	}
	else {
		return 0;
	}
}



int main() {

	int k, a, b, c, product;

	for(int i = 1; i <= 1000; i++) {
		for(int j = 1; j <= 1000; j++) {
			k = isPythag(i,j);
			if(k != 0 && i + j + k == 1000) {
				product = i*j*k;
				a = i;
				b = j;
				c = k;
				break;
			}
		}
	}
	
	std::cout << a << " " << b << " " << c << " " << product << "\n"; 
}
