#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t>0){
        int n, m;
        cin >> n >> m;
        int x=0; int y=0;
        int peri = 0;
        for(int i=0; i<n; i++){
            cin >> x >> y;
            peri += 4*m;
            if(i==0) continue;
            peri -= 2*(m-x) + 2*(m-y);
        }
        t--;
        cout << peri << endl;
    }
    return 0;
}