#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2==str2+str1){
            return str1.substr(0,gcd(str1.length(),str2.length()));
        }else{
            return "";
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1>>str2;
        Solution ob;
        string ans = Solution.gcdOfStrings(str1,str2);
        cout<<ans<<"\n";
    }
    return 0;
}