#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}

string encode(string src)
{   
    string ans="";
    char curr;
    int cnt=1;
    curr=src[0];
    for(int i=1;i<src.length();i++){
        if(curr!=src[i]){
            string tmp = to_string(cnt);
            ans+=curr+tmp;
            cnt=1;
            curr=src[i];
        }else{
            cnt++;
        }
    }
    ans += curr + to_string(cnt);
  
    return ans;
}     
 
