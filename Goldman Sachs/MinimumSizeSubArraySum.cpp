#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int> nums) {
        int r,l=0,n=nums.size();
        int sum=0,ans=INT_MAX;
        for(r=0;r<n;r++){
            sum+=nums[r];
            while(l<=r&&sum>=target){
                
                ans=min(ans,r-l+1);
                sum-=nums[l];
                l++;
            }
        }
        if(ans==INT_MAX)
            return 0;
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int target,n;
        cin >> n>>target;
        vector<int> a;
        for(int i=0;i<n)cin>>a[i];
        
        Solution ob;
        auto ans = ob.minSubArrayLen(target,a);
        cout << ans << "\n";
    }
    return 0;
}