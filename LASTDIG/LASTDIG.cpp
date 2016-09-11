#include <iostream>
using namespace std;
int main() {
    
    int t, a, b, x; 
    int tab[10][5] = {{1, 0}, {1, 1}, {4, 6, 2, 4, 8}, {4, 1, 3, 9, 7}, {2, 6, 4}, {1, 5}, {1, 6}, {4, 1, 7, 9, 3}, {4, 6, 8, 4, 2}, {2, 1, 9}};
    cin >> t;
    
    while(t--) {
     
        cin >> a >> b;
        
        if(b==0) {
            cout << "1\n";
        } 
        else {
            
            a%=10;
            x = b%tab[a][0];
            cout << tab[a][x+1] << endl;
            
        }
    }
    
    return 0;
}
