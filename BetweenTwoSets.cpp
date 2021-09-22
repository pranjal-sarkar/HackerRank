#include<iostream>
using namespace std;

int a[10], b[10];

bool find(int n, int a_size, int b_size){
    int i;

    for(i=0;i<a_size;i++){
        if(n%a[i]!=0){
            return 0;
        }
    }

    for(i=0;i<b_size;i++){
        if(b[i]%n!=0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int n, m, i, count=0;
    int min=INT32_MAX, max=INT32_MIN;

    cin>>n>>m;

    for(i=0;i<n;i++){
        cin>>a[i];
        if(min>a[i]){
            min = a[i];
        }
        if(max<a[i]){
            max=a[i];
        }
    }

    for(i=0;i<m;i++){
        cin>>b[i];
        if(min>b[i]){
            min = b[i];
        }
        if(max<b[i]){
            max=b[i];
        }
    }

    for(i=min;i<=max;i++){
        if(find(i, n, m)){
            count++;
        }
    }

    cout<<count;

    return 0;
}
