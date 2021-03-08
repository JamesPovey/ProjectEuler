#include<iostream>
#include<vector>

int main() {
	
	int init1 = 1;
	int init2 = 2;
	int sum = 0;
	int total = init2;
	
	while(sum < 4000000) {
		sum = init1 + init2;
		init1 = init2;
		init2 = sum;
		
		if(sum % 2 == 0) {
			total += sum;
		}
	}
	
	std::cout << total << "\n";
}
