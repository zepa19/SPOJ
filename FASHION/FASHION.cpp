#include <iostream>

using namespace std;

//quicksort ->> http://cpp0x.pl/kursy/Algorytmy/Sortowanie-danych/Sortowanie-szybkie-ang-quick-sort/450
void Sortowanie( int tab[], int left, int right )
{
    int i = left;
    int j = right;
    int x = tab[( left + right ) / 2 ];
    do
    {
        while( tab[ i ] < x )
             i++;
        
        while( tab[ j ] > x )
             j--;
        
        if( i <= j )
        {
            swap( tab[ i ], tab[ j ] );
            
            i++;
            j--;
        }
    } while( i <= j );
    
    if( left < j ) Sortowanie( tab, left, j );
    
    if( right > i ) Sortowanie( tab, i, right );
    
}

int main() {
    
    int t, n, sum, x;
    
    cin >> t;
    
    while(t--) {
     
        cin >> n;
        
        sum = 0;
        int *men = new int[n];
        int *wmen = new int[n];
        
        for(int i=0; i<n; i++)
            cin >> *(men+i);
        
        for(int i=0; i<n; i++)
            cin >> *(wmen+i);
        
        Sortowanie(men, 0, n-1);
        Sortowanie(wmen, 0, n-1);
        
        for(int i=0; i<n; i++)
            sum+=wmen[i]*men[i];
        
        delete [] men;
        delete [] wmen;
        
        cout << sum << endl;
        
    }
    
    return 0;
}
