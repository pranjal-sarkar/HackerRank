// Error

#include<iostream>
using namespace std;

int main(){
    int input[1000];
    int HighScore[1000], LowScore[1000];
    int i, n;
    int LowCount=0, HighCount=0;

    cin>>n;

    for(i=0;i<n;i++){
        cin>>input[i];
    }

    HighScore[0] = LowScore[0] = input[0];

    for(i=1;i<n;i++){
        if(input[i] < LowScore[i-1]){
            HighScore[i] = HighScore[i-1];
            LowScore[i] = input[i];
            LowCount++;
        }
        else if(input[i] > HighScore[i-1]){
            LowScore[i] = LowScore[i-1];
            HighScore[i] = input[i];
            HighCount++;
        }
        else{
            LowScore[i] = LowScore[i-1];
            HighScore[i] = HighScore[i-1];
        }
    }

    cout<<HighCount<< " "<< LowCount;

    return 0;
}