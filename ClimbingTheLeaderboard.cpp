#include<iostream>
using namespace std;

int binarySearch(int search, int rankList[], int n){
    int ul, ll;
    int mid;

    ul = n-1;
    ll = 0;

    while(ll<ul){
        mid = (ul + ll)/2;

        if(search < rankList[mid]){
            ll = mid + 1;
        }
        else if(search > rankList[mid]){
            ul = mid - 1;
        }
        else if(search == rankList[mid]){
            return (mid + 1);
        }
    }

    return mid;
}

void solve(int rankList[], int n, int player[], int m){
    int i;
    int search;

    for(i=0;i<m;i++){
        search = player[i];
        cout<<binarySearch(search, rankList, n)<<endl;
    }
}

void rankSort(int ranked[], int n, int player[], int m){
    int rankList[200000];
    int i=1, k=1;

    rankList[0] = ranked[0];

    for(;i<n;i++){
        if(ranked[i] != ranked[i-1]){
            rankList[k] = ranked[i];
            k++;
        }
    }

    solve(rankList, k, player, m);
}

int main(){
    int i;
    int n, m;
    int ranked[200000];
    int player[200000];

    cin>>n;
    for(i=0;i<n;i++){
        cin>>ranked[i];
    }
    cin>>m;
    for(i=0;i<m;i++){
        cin>>player[i];
    }

    rankSort(ranked, n, player, m);

    return 0;
}