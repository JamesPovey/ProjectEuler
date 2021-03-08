#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {

	int sum = 0;

	vector<string> proper{
	"" ,"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	
	vector<string> tens{
	"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy" , "eighty", "ninety"};
	
	
	for(int i = 1; i < 1000; i++) {
		if(i < 20) {
			sum += proper[i].length();
		}
		else if(i >= 20 && i < 100) {
			sum += proper[i % 10].length();
			sum += tens[i / 10].length();
		}
		else {
			sum += proper[i / 100].length();
			sum += 7;
			
			if(i % 100 != 0) {
				sum += 3;
				if(i % 100 < 20) {
					sum += proper[i % 100].length();
				}
				else {
					sum += proper[i % 10].length();
					sum += tens[(i / 10) % 10].length();
				}
			} 				
		} 
	}
	
	sum += 11;
	
	 cout << sum << "\n";
}
