#include<iostream>
using namespace std;

int main(){
    int x, freq[6]={0};
    int n, i, id;
    int max=INT32_MIN;

    cin>>n;

    for(i=0;i<n;i++){
        cin>>x;
        freq[x]++;
        if(max<freq[x]){
            max = freq[x];
        }
    }

    for(i=1;i<6;i++){
        if(max==freq[i]){
            cout<<i;
            return 0;
        }
    }
}