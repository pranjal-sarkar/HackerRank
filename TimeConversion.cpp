#include<iostream>
#include<string>
using namespace std;

void solve(string timee){
    string tmp;
    int x;

    tmp = timee.substr(0, 2);
    x = stoi(tmp);
    x += 12;
    tmp = to_string(x);
    timee.erase(0, 2);
    timee.insert(0, tmp);
    timee.erase(8, 2);

    cout<<timee;
}

int main(){
    string timee;
    // string tmp;
    // int x;

    cin>>timee; // hh:mm:ssPM or hh:mm:ssAM
                // 0123456789

    if(timee[8] == 'A' && timee.substr(0, 2) == "12"){
        string tmp = "00";
        timee.erase(0, 2);
        timee.insert(0, tmp);
        timee.erase(8, 2);
        cout<<timee;
    }

    if(timee[8] == 'A' && timee.substr(0, 2) != "12"){
        timee.erase(8, 2);
        cout<<timee;
    }

    if(timee[8] == 'P' && timee.substr(0, 2) == "12"){
        timee.erase(8, 2);
        cout<<timee;
    }
    
    if(timee[8] == 'P' && timee.substr(0, 2) != "12"){
        solve(timee);
    }

    // cout<<timee;

    return 0;
}

// 12:02:21AM --> 00:02:21
// 03:05:54AM --> 03:05:54
// 12:15:24PM --> 12:15:24
// 05:30:45PM --> 17:30:45