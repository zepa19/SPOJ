#include <iostream>
#include <cmath>

using namespace std;

int funk(int x) {
 
    int sq, l=1;
    sq=sqrt(x);
    for(int i=2; i<=sq; i++)
        if(x%i==0)
            l++;
        
    return l;
    
}

int main() {
 
    int n, w=0;
    
    cin >> n;
    
    for(int i=1; i<=n; i++)
        w+=funk(i);
    
    cout << w;
    
}
