#include<iostream>
using namespace std;

void dummy(int j){
    cout<<"\nInside Dummy: "<<j;
}

void RankList(int ranked[], int n, int j){
    int rankList[200000];
    int i=1, k=1;

    rankList[0] = ranked[0];

    for(;i<n;i++){
        if(ranked[i] != ranked[i-1]){
            rankList[k] = ranked[i];
            k++;
        }
    }

    for(i=0;i<k;i++){
        cout<<rankList[i]<<" ";
    }

    dummy(j);
}

int main(){
    int i, n;
    int arr[100];

    cin>>n;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int j = i;

    RankList(arr, n, j);

    return 0;
}