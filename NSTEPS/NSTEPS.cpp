#include <iostream>

using namespace std;

int main() {

    int t, x, y;
    
    cin >> t;
    
    while(t--) {
     
        cin >> x >> y;
        
        if(x == y && x%2==0)
            cout << 2*x;
        else if(x == y && x%2==1)
            cout << 2*x-1;
        else if(x == y+2 && x%2==0)
            cout << x+y;
        else if(x == y+2 && x%2==1)
            cout << x+y-1;
        else
            cout << "No Number";
        
        cout << endl;
        
    }

	return 0;
}
