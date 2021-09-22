#include<iostream>
using namespace std;

int solve(int [], int, int);

int main(){
    int arr[100];
    int n, k;
    int i;

    cin>>n>>k;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<solve(arr, k, n);

    return 0;
}

int solve(int arr[], int k, int n){
    int i, j;
    int count=0;

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if((arr[i]+arr[j])%k==0){
                count++;
            }
        }
    }

    return count;
}