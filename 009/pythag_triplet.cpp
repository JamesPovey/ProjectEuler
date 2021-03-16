/* A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc. */

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
