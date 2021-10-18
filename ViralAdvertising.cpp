#include<iostream>
using namespace std;

int main(){
    int shared=5;
    int liked;
    int cumu_liked=0;
    int i;
    int n; // days

    cin>>n;

    i = 1;
    while(i<=n){
        liked = shared / 2;
        shared = liked * 3;
        
        cumu_liked += liked;

        i++;
    }

    cout<<cumu_liked;

    return 0;
}