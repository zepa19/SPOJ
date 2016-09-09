//http://4programmers.net/Delphi/Gotowce/Silnia_na_przyk%C5%82adzie_szybkiego_mno%C5%BCenia

#include <iostream>
using namespace std;
char a[180],b[180];
int l;
void RLCA() {
    short c=0;
    for(int i=0; i<l; i++) {
        a[i] = a[i]*2+c;
        if(a[i]>9) {
            a[i]-=10;
            c = 1;
        }
        else
            c = 0;
    }
    a[l] += c;
    l += c;
}
void AB() {
    short c=0;
    for(int i=0; i<l; i++) {
        b[i] = b[i]+a[i]+c;
        if(b[i]>9) {
            b[i]-=10;
            c = 1;
        }
        else
            c = 0;
    }
    b[l] += c;
    l += c;
}
void BA() {
    short c=0;
    for(int i=0; i<l; i++) {
        a[i] = b[i]+a[i]+c;
        if(a[i]>9) {
            a[i]-=10;
            c = 1;
        }
        else
            c = 0;
    }
    a[l] += c;
    l += c;
}
int main() {
    int t, n, x;
    cin >> t;
    while(t--) {
        cin >> n;
        if(n==0 || n==1)
            cout << n;
        else {
            for(int i=0; i<180; i++){
                a[i] = b[i] = 0;
            }
            a[0] = 2;
            l = 1;
            for(int i=3; i<=n; i++) {
                x = i;
                for(int j=0; j<l; j++) {
                    b[j] = 0;
                }
                while(x>=2) {
                    if(x&1) {
                        AB();
                        x--;
                    }
                    else {
                        RLCA();
                        x/=2;
                    }
                }
                BA();
            }
            for(int i=l-1; i>=0; i--) {
                cout << char(a[i]+48);
            }
        }
        cout << endl;
    }
    return 0;
}
