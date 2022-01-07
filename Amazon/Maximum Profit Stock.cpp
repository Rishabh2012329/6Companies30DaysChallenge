#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int maxProfit(int k, int n, int arr[]) {
        vector<vector<int>> dp(k+1,vector<int>(n+1,0));
        for(int i=1;i<=k;i++){
            int profit = INT_MIN;
            for(int j=1;j<=n;j++){
                //buying, stoing -arr[j] so that we can add arr[j] later to sell
                profit = max(profit,dp[i-1][j-1] - arr[j-1]);
                // arr[i]+profit = selling
                dp[i][j] = max(dp[i][j-1],arr[j-1]+profit);
                
            }
        }
         return dp[k][n];
    }
   
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}