#include <iostream>

using namespace std;

const int d = 2600;

int mullong(int *l, int m, int p) {
 
    int t[d], z=0, q=1, mn;
    
    for(int i=0; i<d; i++)
        t[i]=0;
    
    while(m) {
     
        mn = m%10;
        m/=10;
        
        for(int i=0, j=z; i<p; i++, j++) {
            
            t[j] += l[i]*mn;
            
            t[j+1] += t[j]/10;
            t[j]%=10;
            
            q=j+1;
        }
        
        z++;
        
    }
    
    if(t[q] != 0)
        q++;
    
    for(int i=0; i<q; i++)
        l[i]=t[i];
    
    return q;
}

void sublong(int *l, int m) {
    
    int mn, zod=0, i;
    
    while(m) {
        mn = m%10;
        m/=10;
        i=0;
        
        l[zod]-=mn;
        
        if(l[zod] < 0) {
            do {
                l[zod+i] += 10;
                l[zod+i+1] -= 1;
                i++;
            }while(l[zod+i]<0);
        }
        
        zod++;
        
    }
    
}

int main() {
    
    int lon[d]={1}, ptr=1, n;
    
    cin >> n;
    
    n+=3;
    
    for(int i=2; i<=n; i++) {
        ptr = mullong(lon, i, ptr);
    }
    
    n*=n;
    
    sublong(lon, --n);
    
    for(int i=ptr-1;i>=0;i--) {
        cout << lon[i];
    }
    
    cout << endl;
    
    return 0;
}
