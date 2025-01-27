// not working;

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin >> nums[i];
        }
        int count = 0;
        for(int i=1; i<n; i++){
            if(nums[i-1] > nums[i]){
                count--;
            }
            else{
                count++;
            }
        }
        if(count > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
