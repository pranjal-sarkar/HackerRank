#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n, pos_count=0, neg_count=0, zero_count=0;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] > 0)
            pos_count++;
        else if(arr[i] == 0)
            zero_count++;
        else 
            neg_count++;
    }

    float pos_ratio, neg_ratio, zero_ratio;

    cout.setf(ios::fixed);

    pos_ratio = (float)pos_count/n;
    neg_ratio = (float)neg_count/n;
    zero_ratio = (float)zero_count/n;

    cout<<setprecision(6)<<pos_ratio<<endl;
    cout<<setprecision(6)<<neg_ratio<<endl;
    cout<<setprecision(6)<<zero_ratio;

    return 0;
}