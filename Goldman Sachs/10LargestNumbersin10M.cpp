#include<bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

void solve(vector<int> arr){
    ordered_set num;
    int n=arr.size();
    for(int i=0;i<10;i++){
        num.insert(arr[i]);
    }
    for(int i=10;i<n;i++){
        num.insert(arr[i]);
        num.erase(num.begin());
    }
    for(int i=0;i<10;i++){
        cout<<*(num.find_by_order(i));
    }
    
    
}

int main(){
    int n=10000000;
    vector<int> arr;
    for(int i=0;i<n;i++){
        arr.push_back(arr[i]);
    }
    solve(arr);
}