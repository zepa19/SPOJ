#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	short t, tt=0, n, m, time, numVisited, p, q, maxIndex, timeSpent, nowX, nowY, trav, toShop, toHome;
	double maxPriority, priority;
	int *shopX, *shopY, *shopA, *shopB, *shopC;
	bool *visited;
	
	cin >> t;
			
	while(tt<t) {
	
		cout << ++tt << endl;
		
		time = numVisited = 0;
		
		cin >> n >> m;
		
		shopX = new int[n];
		shopY = new int[n];
		shopA = new int[n];
		shopB = new int[n];
		shopC = new int[n];
		visited = new bool[n];
		
		for(int i=0; i<n; i++) {
			cin >> *(shopX+i) >>  *(shopY+i) >> *(shopA+i) >> *(shopB+i) >> *(shopC+i);
			*(visited+i) = false;
		}
		
		cin >> p >> q;
		nowX = p;
		nowY = q;
		
		while((time<m) && (numVisited<n)) {
			
			maxPriority = maxIndex = timeSpent = trav = 0;
			
			for(int i=0; i<n;i++) {
			
				if(!visited[i]){
				
					toShop = abs(nowX-shopX[i]) + abs(nowY-shopY[i]);
					toHome = abs(p-shopX[i]) + abs(q-shopY[i]);
				
					for(int j=1; j<=shopC[i]; j++) {
						
						if((time+toShop+toHome+j)<=m) {
							
							int f1 = shopA[i]-shopB[i]*(time+toShop);
							int f2 = j*shopB[i];
							
							if(f1>=0) {
								priority = (double)f2;
								if((priority/((double)(toShop+j)))>maxPriority) {
									maxPriority = priority/((double)(toShop+j));
									//cout << "!   " << i << " " << maxPriority << " " << priority << " " << toShop << " " << j << endl;
									maxIndex = i;
									trav = toShop+j;
									timeSpent = j;
								}
							}
							
						}
						
					}
					
				}
				
			}
			
			if(maxPriority > 0) {
				time += trav;
				nowX = shopX[maxIndex];
				nowY = shopY[maxIndex];
				visited[maxIndex] = true;
				numVisited++;
				cout << ++maxIndex << " " << timeSpent << endl;
			}
			else {
				break;	
			}
			
		}
		
		cout << "0 0\n";
		
		delete [] shopX;
		delete [] shopY;
		delete [] shopA;
		delete [] shopB;
		delete [] shopC;
		delete [] visited;
		
	}
			
	return 0;
}