#include<iostream>
using namespace std;

int main(){
    int s[100];
    int d, m;
    int i, j, n, index_count, sum, ans=0;

    cin>>n;

    for(i=0;i<n;i++){
        cin>>s[i];
    }

    cin>>d>>m;

    for(i=0;i<=n-m;i++){
        index_count=0;
        sum=0;
        for(j=i;j<n;j++){
            // sum += s[j];
            index_count++;
            if(index_count<=m){
                sum += s[j];
                if(sum>d){
                    break;
                }
                if(sum==d && index_count==m){
                    ans++;
                }
            }
        }
    }

    cout<<ans;

    return 0;
}