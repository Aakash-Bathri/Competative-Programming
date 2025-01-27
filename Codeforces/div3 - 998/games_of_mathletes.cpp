#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);  
        unordered_map<int, int> hash;
        int count = 0;        
        
        // Input numbers
        for(int i = 0; i < n; i++) {
            cin >> nums[i];
            hash[nums[i]]++;
        }
        for(int i=0; i<n; i++){
            int a = nums[i];
            int b = k - a;
            if(hash[a] > 0){
                hash[a]--;
                if(hash[b] > 0){
                    count++;
                    hash[b]--;
                }
            }
        }
    
        
        cout << count << endl;
    }
    return 0;
}
