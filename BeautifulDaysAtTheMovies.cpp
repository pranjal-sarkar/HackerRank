#include<bits/stdc++.h>
using namespace std;

int reverseNum(int num){
    int rnum=0;
    int remainder;

    while(num != 0){
        remainder = num % 10;
        rnum = (rnum*10) + remainder;
        num /= 10;
    }

    return rnum;
}

int main(){
    int num;
    int reverse_num;
    int difference;
    int bdays=0;
    int i, j, k;

    cin>>i>>j>>k;

    while(i<=j){
        num = i;

        reverse_num = reverseNum(num);

        difference = num - reverse_num;
        if(difference<0){
            difference = -difference;
        }

        if(difference%k == 0){
            bdays ++;
        }
        
        i++;
    }

    cout<<bdays;

    return 0;
}