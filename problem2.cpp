#include<bits/stdc++.h>
using namespace std;

int main(){

ios::sync_with_stdio(0);
	cin.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

//code here

     int t;
     cin >> t;

	 for (int b = 0; b < t; b++) {
		int n,p;
         cin >> n >> p;
         int v[n];
         for(int i=0; i<n; i++){
             cin >> v[i];
         }

        //start

        int sum = 0;
		
		int smallestDiff = 1;
		
		int fcount = 0;
		int scount = 0;
		int smallestSum = 0;
		
		for(int a = 1; a <= n-1; a++) {
			fcount++;
			for(int i = 0; i < n - a; i++) {
				scount++;
				for(int x = i; x <= i+a; x++) { // sum from i to i+a
					sum = sum + v[x];
				}
                //cout << sum;

				if(sum == p) {
					int indexSum = i+a;
					for(int x = i; x <= i+a; x++) {
						smallestSum = smallestSum + v[x];
					}
					cout << "Case #" << b+1<< ": " << i << " " <<indexSum << " " << "--> " << smallestSum << "\n";
					return (0);
				}
				
				else if(sum > p) {

					if(smallestDiff == sum - p) {
						int indexSum = i+a;
						for(int x = i; x <= i+a; x++) {
							smallestSum = smallestSum + v[x];
						}
						cout << "Case #" << b+1<< ": " << i << " " << indexSum << " " << "--> " << smallestSum << "\n";
						return (0);
					}
					else if(smallestDiff > sum - p) {
						smallestDiff = sum - p;
					}
					else {
						smallestDiff = sum - p;
					}
					
				}
				
				sum = 0;
				
				//cout << "second count : " << scount;
				
			}
			
			//cout << "first count : " << fcount;
			
		}
	 }



    return 0;
}