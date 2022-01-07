#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        if(n<3)
            return 0;
        int maxLength=0,temp=0,point=-1,length=0;

        for(int i=0;i<n;i++){
            if(i!=0&&arr[i]>arr[i-1]){
                if(point!=-1){
                    length=0;
                    point=-1;
                }
          
                length++;
            }
            if(i!=0&&i!=n-1&&arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                point = temp;
                length++;

            }
            if(i!=n-1&&arr[i]>arr[i+1]){
                if(point!=-1){
                    
                    length++;
                    maxLength = max(maxLength,length);
                }
                
            }
            if(i!=n-1&&arr[i]==arr[i+1]){
                length=0;
            }
            
        }
        if(maxLength==0)
            return 0;
        return maxLength;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n,0);
        for (int i = 0; i < n; i++) cin >> arr[i];

        Solution ob;
        cout << ob.longestMountain(arr) << endl;
    }
    return 0;
}