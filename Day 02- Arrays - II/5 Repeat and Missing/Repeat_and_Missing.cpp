//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        long long sum=0;
        sum=accumulate(arr.begin(), arr.end(), sum);
        
        int rep;
        for(int i : arr){
            i=abs(i);
            if(arr[i-1] < 0){
                rep=i;
                break;
            }
            arr[i-1]=-arr[i-1];
        }

        int mis=rep + 1ll*n*(n+1)/2 - sum;
        return {rep,mis};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends