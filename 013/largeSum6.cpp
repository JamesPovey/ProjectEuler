#include<iostream>
#include<vector>
#include<string>
#include<typeinfo>
#include<cmath>
#include<fstream>
#include<cstdio>
#include<algorithm>

using namespace std;

string revStr(string str) {

	string rev = string(str.rbegin(), str.rend());
	return rev;
}



string addStrs(string str1, string str2) {
	
	int digit;
	int carryOver = 0;
	string ans = "";
	
	int diffLength = str1.length() - str2.length();
	if(diffLength > 0) {
		for(int i = 1; i <= diffLength; i ++) {
			str2.append(to_string(0));
		}
	}
	else if(diffLength < 0) {
		for(int i = 0; i < (diffLength * -1); i ++) {
			str1.append(to_string(0));
		}
	} 
	
	for(int i = 0; i < str1.length(); i++) {
		digit = (str1[i] - 48) + (str2[i] - 48) + carryOver;
		carryOver = 0;
		if(digit >= 10) {
			carryOver = digit / 10;
			digit = digit % 10;
		}
		ans.append(to_string(digit));
		
	}
	
	if(carryOver != 0) {
		ans.append(to_string(carryOver));
	}
	
	return ans;
} 

int main() {

	string s;

 	ifstream textFile; 
   	textFile.open("013.txt"); 
	//while(!textFile.eof()) {
	//	getline(textFile,tempStr);
	//	s = tempStr;
	
	//}
	//textFile.close();
	
	//ifstream ifs("013.txt");
	//string s((istreambuf_iterator<char>(ifs)), (istreambuf_iterator<char>()));
	//s.erase(remove(s.begin(), s.end(), "\n"), s.end());
	
	string s1 = "";
	string s2 = "";

	string s1Rev = "";
	string s2Rev = "";
	
	getline(textFile, s);

	for(int i = 0; i < 50; i++) {
		s1.append(to_string(s[i] - 48));
	}
	
	int counter = 0;
	
	while(!textFile.eof()) {
	//for(int j = 0; j < 99; j++) {
		getline(textFile, s);
	
		if(!s.empty()) {
			//cout << s << "\n";
			//counter++;
			for(int i = 0; i < 50; i++) {
			s2.append(to_string(s[i] - 48));
			}
		
			s1Rev = revStr(s1);
			s2Rev = revStr(s2);
			
			s1 = revStr(addStrs(s1Rev, s2Rev));	
			s2.clear();
		}
	}
	
	textFile.close();

	//for(int i = 51; i <= s.length(); i++) {
	//	s2.append(to_string(s[i-1] - 48));
	//	if(i % 50 == 0) {
	//		s1Rev = revStr(s1);
	//		s2Rev = revStr(s2);
			
	//		s1 = revStr(addStrs(s1Rev, s2Rev));
	//		s2.clear();
	//	}
	//}

	cout << s1  << "\n" << s1.length() << "\n";
	//cout << counter << "\n";
	
}












































