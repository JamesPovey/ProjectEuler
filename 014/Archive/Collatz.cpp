#include<iostream>

using namespace std;

int main() {
	
	long n, counter, largestNo;
	long chain = 0;
	
	for(int i = 2; i < 1000000; i++) {
		n = i;
		counter = 1;
		while(n != 1) {
			if(n % 2 == 0) {
				n = n / 2;
			}
			else {
				n = (n * 3) + 1;
			}
			counter++;
		}
		if(counter > chain) {
			chain = counter;
			largestNo = i;
		}	
	}
	
	cout << largestNo << "\n";
	//check runtime
}
