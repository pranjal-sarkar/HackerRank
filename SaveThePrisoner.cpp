#include<bits/stdc++.h>
using namespace std;

void solve(){
    long prisoners;
    long candies;
    long startChair;
    long targetChair;
    long i;

    cin>>prisoners>>candies>>startChair;

    cout<<(candies - 1 + startChair - 1)%prisoners + 1;
    cout<<endl;
}

int main(){
    int t;

    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}