#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t > 0){
        int a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        int max_fibonacci = 0;

        vector<int> possible = {a1+a2, a4-a2, a5-a4};
        for(int a3: possible){
            int fibonacci = 0;
            if(a3 == a1+a2) fibonacci++;
            if(a4 == a2+a3) fibonacci++;
            if(a5 == a3+a4) fibonacci++;

            max_fibonacci = max(fibonacci, max_fibonacci);
        }
        cout << max_fibonacci << endl;
        t--;
    }
    return 0;
}