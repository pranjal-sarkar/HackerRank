#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0;
    int candles[100000];
    long max = INT_MIN, prev;

    cin>>n;

    for(int i=0;i<n;i++)
        cin>>candles[i];

    for(int i=0;i<n;i++){
        if(max <= candles[i]){
            prev = max;
            max = candles[i];
            if(max != prev){
                count = 0;
            }
            count++;
        }
    }

    // for(int i=0;i<n;i++){
    //     if(candles[i] == max){
    //         count++;
    //     }
    // }

    cout<<count;

    return 0;
}