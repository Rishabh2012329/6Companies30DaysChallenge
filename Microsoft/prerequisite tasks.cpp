#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    bool isCyclicUtil(vector<int> graph[],vector<int>& visited,vector<int> &recStack,int i){
        if(visited[i]==0){
            visited[i] = 1;
            recStack[i]= 1;
            for(int j=0;j<graph[i].size();j++){
;                if(visited[graph[i][j]]==0&&isCyclicUtil(graph,visited,recStack,graph[i][j]))
                    return true;
                else if(recStack[graph[i][j]]==1)
                    return true;
            }
        }
        recStack[i] = false;
        return false;
    }
    bool isCyclic(vector<int> graph[],int n){
        vector<int> visited(n,0);
        vector<int> recStack(n,0);
        for(int i=0;i<n;i++){
            if(isCyclicUtil(graph,visited,recStack,i))
                return true;
        }
        return false;
    }
public:
	bool isPossible(int n, vector<pair<int, int> >& pre) {
	    vector<int> graph[n];
	    int m = pre.size();
	    for(int i=0;i<m;i++){
	        graph[pre[i].first].push_back(pre[i].second);
	    }
	    return !isCyclic(graph,n);
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}