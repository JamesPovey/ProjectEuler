/* If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?


NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. 
The use of "and" when writing out numbers is in compliance with British usage. */

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
