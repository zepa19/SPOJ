#include <iostream>

using namespace std;

int main() {
 
    int n, s;
    
    while(cin >> n) {
        
        if(n == 0)
            break;
        
        s= 1;
        
        for(int i=2; i<=n; i++) {
            s+=i*i;
        }
        
        cout << s << endl;
        
    }
    
}
