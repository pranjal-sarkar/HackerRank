#include<iostream>
using namespace std;

int main(){
    int year;
    int dd, mm, yyyy;
    int sum;

    cin>>year;

    // check for Gregorian or Julian Calendar
    if(year>=1700 && year<1918){
        // Julian Calendar...

        // check for Leap Year
        if(year%4==0){
            // Leap Year...
            dd = 12;
            mm = 9;
            yyyy = year;
        }
        else{
            // Not Leap Year...
            dd = 13;
            mm = 9;
            yyyy = year;
        }
    }
    else if(year>1918 && year<=2700){
        // Gregorian Calendar...

        // check for Leap Year
        if((year%400==0)||(year%4==0 && year%100!=0)){
            // Leap Year...
            dd = 12;
            mm = 9;
            yyyy = year;
        }
        else{
            // Not Leap Year...
            dd = 13;
            mm = 9;
            yyyy = year;
        }
    }
    else if(year == 1918){
        sum = 31+15+31+30+31+30+31+31;
        // cout<<sum;
        sum = 256 - sum;
        // cout<<"\n"<<sum;

        dd = sum;
        mm = 9;
        yyyy = year;
    }


    cout<<dd<<".0"<<mm<<"."<<yyyy;

    return 0;
}