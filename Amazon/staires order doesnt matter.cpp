#include<bits/stdc++.h>

using namespace std;


class Solution
{
    public:
    long long countWays(int m)
    {
        long long ans=0;
        for(int i=0;i<=m;i++){
            if((m-i)%2==0){
                ans++;
            }
        }
        return ans;
    }
};


int main()
{

    int t;
    cin >> t;
    
    while(t--)
    {
 
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; 
    }
    return 0;
} 