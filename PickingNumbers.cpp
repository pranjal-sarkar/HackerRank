#include<bits/stdc++.h>

using namespace std;

int pickingNumbers(int a[], int n){
    int i;
    int count = 0;
    // int maxCount = -1;
    int check[100]={0};

    for(i=0;i<n;i++){
        check[a[i]] ++;
    }

    for(i=1;i<100;i++){
        if(count < (check[i] + check[i-1])){
            count = check[i] + check[i-1];
        }
    }

    return count;
}

int main(){
    int i, n;
    int a[100];

    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<pickingNumbers(a, n);

    return 0;
}