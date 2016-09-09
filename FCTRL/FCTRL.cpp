#include <stdio.h>

int main() {
    
    int r, n, t;
    
    scanf("%d", &t);
    
    while(t--) {
     
        scanf("%d", &n);
        r=0;
        
        while(n>=1) {
        
            n/=5;
            r+=n;
            
        }
        
        printf("%d\n", r);
        
    }
    
    return 0;
}
