#include<iostream>
using namespace std;

int main(){
    int i, n, k;
    int bill[100000];
    int charge;
    int actual=0;

    cin>>n>>k;

    for(i=0;i<n;i++){
        cin>>bill[i];
    }

    cin>>charge;

    for(i=0;i<n;i++){
        if(i!=k){
            actual += bill[i];
        }
    }

    if(charge == (actual)/2){
        cout<<"Bon Appetit";
    }
    else{
        cout<<charge-(actual)/2;
    }

    return 0;
}