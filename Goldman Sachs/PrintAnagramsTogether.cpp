#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;


class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        unordered_map<string,vector<string>> mp;
        int n=string_list.size();
        vector<vector<string>> ans;
        for(int i=0;i<n;i++){
            string str = string_list[i];
            sort(str.begin(),str.end());
            mp[str].push_back(string_list[i]);
        }
        int i=0;
        for(auto m:mp){
            ans.push_back(vector<string>());
            ans[i] = m.second;
            i++;
            
        }
        return ans;
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
