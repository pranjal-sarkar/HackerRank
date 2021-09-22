#include<iostream>
using namespace std;

int main(){
    int x1, v1, x2, v2;
    int tmp;

    cin>>x1>>v1>>x2>>v2;

    tmp = v1-v2;
    if(tmp<=0){
        cout<<"NO";
        return 0;
    }

    if ((x2-x1)%tmp==0){
      cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;


}