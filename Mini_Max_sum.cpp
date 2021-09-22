#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    long int arr[5], max=INT_MIN, min=INT_MAX; 
    long int min_sum, max_sum, sum=0;

    for(int i=0;i<5;i++)
        cin>>arr[i];

    for(int i=0;i<5;i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
        sum += arr[i];
    }

    min_sum = sum - max;
    max_sum = sum - min;

    cout<< min_sum;
    cout<<" "<<max_sum;

    return 0;
}