#include<iostream>
using namespace std;

void catMouse(){
    int x, y, z;

    cin>>x>>y>>z;

    if(abs(z-x)>abs(z-y)){
        cout<<"Cat B";
    }
    else if(abs(z-x)<abs(z-y)){
        cout<<"Cat A";
    }
    else{
        cout<<"Mouse C";
    }
}

int main(){
    int q;
    int i;

    cin>>q;

    while(q--){
        catMouse();
        cout<<endl;
    }

    return 0;
}