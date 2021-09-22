#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, n;
    int color[100];
    int check[101]={0};
    int pair_count=0;

    cin>>n;

    for(i=0;i<n;i++){
        cin>>color[i];
    }

    for(i=0;i<n;i++){
        check[color[i]] ++;
    }

    for(i=0;i<=100;i++){        
        pair_count += (check[i])/2;
    }

    cout<<pair_count;

    return 0;
}