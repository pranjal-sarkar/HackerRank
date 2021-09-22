#include<iostream>
using namespace std;

int main(){
    int a[3], b[3];
    // int a_point=0, b_point=0;
    int array[2]={0};
    
    for(int i=0;i<3;i++)
        cin>>a[i];
    for(int i=0;i<3;i++)
        cin>>b[i];

    for(int i=0;i<3;i++){
        if(a[i] > b[i]){
            array[0]++;
        }
        else if(a[i] < b[i]){
            array[1]++;
        }
    }

    cout<<array[0]<< " "<< array[1];

    return 0;
}