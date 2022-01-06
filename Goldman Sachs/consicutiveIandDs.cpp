// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string arr){
        int curr_max = 0;
        int last_entry = 0;
        int j;
        string ans="";
        for (int i=0; i<arr.length(); i++)
        {
            int noOfNextD = 0;
     
            switch(arr[i])
            {
            case 'I':
                j = i+1;
                while (arr[j] == 'D' && j < arr.length())
                {
                    noOfNextD++;
                    j++;
                }
                   
                if (i==0)
                {
                    curr_max = noOfNextD + 2;
                    //handling I
                    ans+=to_string(++last_entry);
                    ans+=to_string(curr_max);
                    last_entry = curr_max;
                }
                else
                {
                    curr_max += noOfNextD + 1;
                    //handling I
                    last_entry = curr_max;
                    ans+=to_string(last_entry);
                }
     
                for (int k=0; k<noOfNextD; k++)
                {
                    ans+=to_string(--last_entry);
                    i++;
                }
                break;

            case 'D':
                if (i == 0)
                {
                    j = i+1;
                    while (arr[j] == 'D' && j < arr.length())
                    {
                        noOfNextD++;
                        j++;
                    }
                    curr_max = noOfNextD + 2;
                    ans+=to_string(curr_max);
                    ans+=to_string(curr_max-1);
                    
                    last_entry = curr_max - 1;
                }
                else
                {
                    ans+=to_string(last_entry-1);
                    last_entry--;
                }
                break;
            }
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
