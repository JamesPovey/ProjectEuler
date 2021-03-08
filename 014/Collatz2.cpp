#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	long n, counter, largestNo;
	long chain = 0;
	
	vector<int> prevNums(1000001);
	
	for(int i = 2; i < 1000000; i++) {
		n = i;
		counter = 1;
		while(n != 1 && n >= i) {
			if(n % 2 == 0) {
				n = n / 2;
			}
			else {
				n = (n * 3) + 1;
			}
			counter++;
		}
		prevNums[i] = counter + prevNums[n];
		
		if(prevNums[i] > chain) {
			chain = prevNums[i];
			largestNo = i;
		}	
	}
	
	cout << largestNo << "\n";
	//check runtime
}
