#include<bits/stdc++.h>
using namespace std;


class Solution {
	public:
		int CountWays(string str){
		   
		    long long int mod = 1e9 + 7;
		    int n=str.size();
		    vector<long long int>dp(n+1,0);
		    dp[0]=dp[1]=1;
		    if(str[0] == '0')
				return 0;
		    for(int i=1;i<n;i++){
		        if(str[i] == '0' and str[i-1] > '2')
					return 0;
		    }
		    for(int i=2;i<=n;i++){
		        if(str[i-1] > '0')
					dp[i] = dp[i-1];
				if(str[i-2] == '1' or (str[i-2] == '2' and str[i-1] < '7'))
					dp[i] +=dp[i-2];
				dp[i] %= mod;
		    }
		    return dp[n];
		}

};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  