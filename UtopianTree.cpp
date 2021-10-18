#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; // no. of growth cycles
    int height = 1;

    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2 == 0){
            height += 1;
        }
        else{
            height *= 2;
        }
    }

    cout<<height<<endl;
}

int main(){
    int t; // no. of test cases

    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}