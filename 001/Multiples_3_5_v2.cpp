#include<iostream>
#include<vector>

int main() {

	std::vector<int> mult3;
	std::vector<int> mult5;
	
	int sum3, sum5;
	
	for(int i = 1; i < 1000; i++) {
		if(i % 3 == 0) {
			mult3.push_back(i);
		}
		else if (i % 5 == 0 && i % 3 != 0){
			mult5.push_back(i);
		}
	}
	
	for(int i = 0; i < mult3.size() ; i++) {
		sum3 += mult3[i];
	}
	
	for(int i = 0; i < mult5.size() ; i++) {
		sum5 += mult5[i];
	}
	
	int totalSum = sum3 + sum5; 
	
	std::cout << totalSum << "\n";
}
