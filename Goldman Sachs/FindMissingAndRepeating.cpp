#include <bits/stdc++.h>

using namespace std;


class Solution{
public:
    vector<int> findTwoElement(int *arr, int n) {
        int xor1;
        int set_bit_no;
        int i;
        int x = 0;
        int y = 0;
        
        xor1 = arr[0];
        
        for (i = 1; i < n; i++)
            xor1 = xor1 ^ arr[i];
        
        for (i = 1; i <= n; i++)
            xor1 = xor1 ^ i;

        set_bit_no = xor1 & -xor1;
        
        for (i = 0; i < n; i++) {
            if (arr[i] & set_bit_no)
                x = x ^ arr[i];
            else 
                y = y ^ arr[i];
        }
        
        for (i = 0; i <= n; i++) {
            if (i & set_bit_no)
                x = x ^ i;
            else
                y = y ^ i;
        }
        vector<int> ans(2,0);
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                ans[0] = x;
                ans[1]=  y;
                break;
            }
            if(arr[i]==y){
                ans[0] = y;
                ans[1]=  x;
                break;
            }
            
        }
        
  
        return ans;

    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
} 