#include<iostream>

using namespace std;

#define max 100000

int main(){
    int n, k, q;
    int a[max];
    int queries[max];
    int i, j;
    int temp, index_count[max];

    // input
    cin>>n>>k>>q;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<q;i++){
        cin>>queries[i];
    }

    for(i=0;i<n;i++){
        index_count[i] = (i + k)%n;
    }

    for(i=0;i<q;i++){
        for(j=0;j<n;j++){
            if(queries[i] == index_count[j]){
                cout<<a[j]<<endl;
            }
        }
    }

    return 0;
}