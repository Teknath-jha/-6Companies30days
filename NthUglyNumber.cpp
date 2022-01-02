// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    ull ugly[n+1];
	    ugly[0]=1;  // bydefault it is 
	    int p2=0,p3=0,p5=0;
	    for(int i=1;i<n;i++)
	    {
	        ull temp=min({ 2*ugly[p2] , 3*ugly[p3] , 5*ugly[p5]});
	        ugly[i]=temp;
	        
	        if(temp%2==0)
	            p2++;
	            
	        if(temp%3==0)
	            p3++;
	       
	        if(temp%5==0)
	            p5++;
	    }
	    
	    return ugly[n-1];
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends