#include <bits/stdc++.h>

using namespace std;


class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    string order="a!#$%&*@^~";
	    unordered_map<char,int> mp;
	    mp['!']=1;
	    mp['#']=2;
	    mp['$']=3;
	    mp['%']=4;
	    mp['&']=5;
	    mp['*']=6;
	    mp['@']=7;
	    mp['^']=8;
	    mp['~']=9;
	    vector<int> nts,bts;
	    for(int i=0;i<n;i++){
	        nts.push_back(mp[nuts[i]]);
	        bts.push_back(mp[bolts[i]]);
	    }
	    sort(nts.begin(),nts.end());
	    sort(bts.begin(),bts.end());
	    for(int i=0;i<n;i++){
	        nuts[i]=order[nts[i]];
	    }
	 
	    for(int i=0;i<n;i++){
	        bolts[i]=order[bts[i]];
	    }
	}

};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}