// Apples and Oranges Problem Sum

#include<iostream>
using namespace std;

int main(){
    int s, t, a, b, m, n, i, tmp;
    int apple_count=0, orange_count=0;

    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;

    int apples[100000], oranges[100000];

    for(i=0;i<m;i++){
        cin>>apples[i];
    }

    for(i=0;i<n;i++){
        cin>>oranges[i];
    }

    // apple count
    for(i=0;i<m;i++){
        tmp=a+apples[i];
        if(tmp>=s && tmp<=t){
            apple_count++;
        }
    }

    // orange count
    for(i=0;i<n;i++){
        tmp = b + oranges[i];
        if(tmp<=t && tmp>=s){
            orange_count++;
        }
    }

    cout<<apple_count<<endl<<orange_count;

    return 0;
}
