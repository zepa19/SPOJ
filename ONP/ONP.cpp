#include <iostream>
#include <string>

using namespace std;

int p(char c)
{
    switch(c)
    {
        case '+':
        case '-': 
            return 1;
        case '*':
        case '/': 
            return 2;
        case '^': 
            return 3;
    }
    return 0;
}

int main() {
 
    int t, sptr=0;
    char stos[400];
    string wej;
    
    cin >> t;
    
    while(t--) {
     
        cin >> wej;
        sptr = 0;
        
        for(int i=0; i<wej.length(); i++) {
        
            switch(wej[i]) {
             
                case '(':
                    stos[sptr++] = '(';
                    break;
                case ')':
                    while(stos[sptr-1]!='(')
                        cout << stos[--sptr];
                    
                    sptr--;
                    break;
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                    while(sptr) {
                        if(p(wej[i]) == 3 || p(wej[i]) > p(stos[sptr-1])) break;
                        cout << stos[--sptr];
                    }
                    stos[sptr++] = wej[i];
                    break;
                default:
                    cout << wej[i];
                    break;
                
            }
            
        }
        
        while(sptr--) {
            cout << stos[sptr];
        }
        
        cout << endl;
        
    }
    
    return 0;
}
