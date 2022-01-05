#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


class Solution{
public:	

	ull getNthUglyNo(int n) {
	    vector<ull> dp(n+1,0);
	    int i1=0,i2=0,i3=0;
	    dp[0]=1;
	    for(int i=1;i<=n;i++){
	        dp[i] = min(2*dp[i1],min(3*dp[i2],5*dp[i3]));
	        if(dp[i]==2*dp[i1])
	            i1++;
	        if(dp[i]==3*dp[i2])
	            i2++;
	        if(dp[i]==5*dp[i3])
	            i3++;
	    }
	    return dp[n-1];
	}
};



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