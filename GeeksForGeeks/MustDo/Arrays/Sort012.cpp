// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        
        int zeros=0;
        int ones=0;
        int twos=0;
        
        for(int i=0;i<n;i++){
            if(a[i] == 0) zeros++;
            else if(a[i] == 1) ones++;
            else twos++;
        }
        
        int itr=0;
        
        while(itr < zeros)a[itr++]=0;
        while(itr < zeros + ones)a[itr++]=1;
        while(itr < zeros + ones + twos)a[itr++]=2;
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends