#include<bits/stdc++.h>
using namespace std;

#define max 1000

void solve(){
    int n, k;
    int time[max];
    int students = 0;

    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>time[i];
    }

    for(int i=0;i<n;i++){
        if(time[i] <= 0){
            students++;
        }
    }
    
    if(students < k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int t;

    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}