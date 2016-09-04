#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >> n;

	int xn = 58;
	unsigned long int silnia = 720;

	for(int i=7;i<=n;i++) {

		silnia *= i;
		xn *= 2;
		xn += i-2;

	}

	cout << silnia+xn << endl;

	return 0;
}
