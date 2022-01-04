#include<bits/stdc++.h>

using namespace std;

int solve(int n,int m,int k){
    if(m<n-k+1){
        return k+m-1;
    }
    m-=n-k+1;
    if(m%n==0)
        return n;
    return m%n;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        cout<<solve(n,m,k)<<"\n";
    }
    return 0;
}