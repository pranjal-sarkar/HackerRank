#include<iostream>
using namespace std;

int main(){
    int b, n, m; // b = budget
    int i, j;
    int keyboard[1000]; // n
    int drives[1000]; // m
    int max;

    cin>>b>>n>>m;
    for(i=0;i<n;i++){
        cin>>keyboard[i];
    }
    for(i=0;i<m;i++){
        cin>>drives[i];
    }

    max = -1;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if((max < keyboard[i]+drives[j]) && (keyboard[i]+drives[j] <= b)){
                max = keyboard[i]+drives[j];
            }
        }
    }

    cout<<endl<<max;

    return 0;
}