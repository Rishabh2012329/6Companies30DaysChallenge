#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends


class Solution
{
    unordered_map<int,string> numpad;
    vector<string> ans;
    void solve(vector<int> possible,int n,int a[],string tmp,int curr){
        if(curr==n){
            ans.push_back(tmp);
            return;
        }
        for(int i=0;i<numpad[a[curr]].length();i++){
            solve(possible,n,a,tmp+numpad[a[curr]][i],curr+1);
        }
    }
    public:
    vector<string> possibleWords(int a[], int n)
    {
            vector<int> possible(n,0);
            numpad[2]="abc";
            numpad[3]="def";
            numpad[4]="ghi";
            numpad[5]="jkl";
            numpad[6]="mno";
            numpad[7]="pqrs";
            numpad[8]="tuv";
            numpad[9]="wxyz";
            solve(possible,n,a,"",0);
           return ans;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
} 