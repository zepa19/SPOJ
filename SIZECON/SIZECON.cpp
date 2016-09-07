#include <iostream>

int main() {
 
    int t, n, k=0;
    
    std::cin >> t;
    
    while(t--){
        std::cin >> n;
        
        if(n>0) k+=n;
    }
    
    std::cout << k;
    
    return 0;
    
}
