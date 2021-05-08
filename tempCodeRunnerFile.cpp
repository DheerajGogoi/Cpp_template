         for(int i=0; i<n; i++){
             cin >> v[i];
         }

        //start

        int sum = 0;
		
		int smallestDiff = 1;
		
		for(int a = 1; a <= n-1; a++) {
			
			for(int i = 0; i < n - a; i++) {
				
				for(int x = i; x <= i+a; x++) {
					sum = sum + v[x];
				}
                //cout << sum;
				
				if(sum >= p) {
					
				// 	if(sum == p) {
				// 		int indexSum = i+a;
				// 		cout << "value " << i << " " << indexSum << "\n";
				// 		return 0;
				// 	}
				// 	else if(smallestDiff == sum - p) {
				// 		int indexSum = i+a;
				// 		cout << "value " << i << " " << indexSum << "\n";
				// 		return 0;
				// 	}
				// 	else if(smallestDiff > sum - p) {
				// 		smallestDiff = sum - p;
				// 	}
				// 	else {
				// 		smallestDiff = sum - p;
				// 	}
				int indexSum = i+a;
				cout << "Case #" << t+1 << ": " << i << " " << indexSum << "\n";
				return 0;
					
				}
				
				sum = 0;
				
			}
			
		}
        //end   
        //while loop ends here