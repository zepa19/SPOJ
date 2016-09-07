#include <iostream>

using namespace std;


// converting dec to bin and reverse
string condb(int number) {
    
    string rev = "";
    
    do
    {
        if ( (number & 1) == 0 )
            rev += "0";
        else
            rev += "1";

        number >>= 1;
    } while ( number );
    
    return rev;
    
}

// converting dec to bin
long long int conbd(string bin) {
    
    long long int number = 0;
    int pot = 1;
    
    for(int i=bin.length()-1; i>=0; i--){
     
        if(bin[i] == '1')
            number += pot;
        
        pot *= 2;
        
    }
    
    return number;
    
}

int main() {
    
    long long int num;
    
    cin >> num;
    
    while(num != -1) {
        
        cout << conbd(condb(num)) << endl;
        
        cin >> num;
        
    }
    
    return 0;
    
}
