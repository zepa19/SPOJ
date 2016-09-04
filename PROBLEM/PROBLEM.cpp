#include <iostream>

using namespace std;

int main() {

	int t, out;
	string l;
	cin >> t;

	while(t--) {
		
		out = 0;

		cin >> l;

		for(int i=0; i<l.length(); i++) {
            
            if(l[i] == '0' || l[i] == '6' || l[i] == '9')
                out++;
            
            if(l[i] == '8')
                out += 2;
            
        }

		cout << out << endl;

	}

	return 0;
}
