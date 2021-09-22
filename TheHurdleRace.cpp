#include<iostream>
using namespace std;

#define MAX 100

int main(){
    int n, k;
    int height[MAX];
    int i;
    int dose=0;

    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>height[i];
    }

    for(i=0;i<n;i++){
        if(height[i] - k > 0){
            dose = max(dose, height[i] - k);
        }
    }

    cout<<dose;

    return 0;
}