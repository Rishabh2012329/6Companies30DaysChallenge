#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]%k]++;
        }
        if(mp[0]%2!=0)
            return false;
        for(auto x:mp){
            if(x.first!=0&&mp[k-x.first]!=x.second)
                return false;
        }
        return true;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  