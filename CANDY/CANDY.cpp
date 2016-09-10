#include <iostream>

using namespace std;

int main() {
 
    int n, sum, odp;
    
    while(cin >> n) {
     
        if(n == -1)
            break;
        
        int *pack = new int[n];
        
        sum = 0;        
        odp = 0;
        
        for(int i=0; i<n; i++) {
            
            cin >> *(pack+i);
            
            sum += *(pack+i);
            
        }
        
        if(sum%n!=0)
            cout << "-1\n";
        else {
        
            sum/=n;
            
            for(int i=0; i<n; i++) {
             
                if(pack[i] > sum)
                    odp += (pack[i]-sum);
                
            }
            
            cout << odp << endl;
            
        }
        
        delete [] pack;
        
    }
    
    return 0;
}
