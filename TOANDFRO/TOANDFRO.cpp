#include <iostream>

using namespace std;

int main() {
 
    int n, x, k;
    
    string text;
    
    while(cin >> n) {
     
        if(n==0)
            break;
        
        cin >> text;
        
        x = text.length()/n;
        k = 0;
        
        char **coded = new char*[x];
        
        for(int i=0; i<x; i++) {
            coded[i] = new char[n];
            
            if(i%2==0) {
                for(int j=0; j<n; j++) {
                
                    coded[i][j] = text[k];
                    k++;
                    
                }
            }
            else {
            
                for(int j=n-1; j>=0; j--) {
                
                    coded[i][j] = text[k];
                    k++;
                    
                }
            }
        }
        
        for(int i=0; i<n; i++) {
         
            for(int j=0; j<x; j++) {
                cout << coded[j][i];
            }
            
        }
        
        for(int i=0; i<x; i++) {
            delete [] coded[i];
        }
        
        delete [] coded;
        
        cout << endl;
        
    }
    
    return 0;
}
