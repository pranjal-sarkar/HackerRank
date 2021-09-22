#include<iostream>
using namespace std;

int main(){
    int p;
    int n;
    int node;

    cin>>n>>p;

    if(n % 2 == 0){
        node = n/2 + 1;
    }
    else{
        node = (n+1)/2;
    }

    if(p/2 < (node-(p/2)-1)){
        cout<<p/2;
    }
    else{
        cout<<node - (p/2) - 1;
    }

    return 0;
}