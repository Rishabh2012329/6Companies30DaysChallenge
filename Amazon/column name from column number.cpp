#include<bits/stdc++.h>

using namespace std;



class Solution{
    public:
    string colName (long long int n)
    {
        string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ",ans="";
        while(n!=0){
            n--;
            ans=str[n%26]+ans;
            n/=26;
        }
        return ans;
    }
};


int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}