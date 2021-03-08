#include<iostream>

int main() {

	int ans = 1;
	bool brk = false;

	while(brk == false) {
		for(int i = 1; i<= 20; i++) {
			if(ans % i != 0) {
				ans++;
				break;
			}
			if(i == 20) {
				brk = true;
			}
		}
	}
	
	std::cout << ans << "\n";

}
