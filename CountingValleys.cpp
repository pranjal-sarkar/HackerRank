#include<iostream>
using namespace std;

#define max_steps 1000000

int main(){
    int steps;
    char path[max_steps];
    int i, level=0, valley_count=0;
    bool entry;

    cin>>steps;
    for(i=0;i<steps;i++){
        cin>>path[i];
    }

    i = 0;
    while(path[i]!='\0'){
        if(path[i]=='D'){
            level += -1;
        }
        else if(path[i]=='U'){
            level += 1;
        }

        if(level==0 && path[i]=='U'){
            valley_count++;
            entry = false;
        }
        i++;
    }

    cout<<valley_count;

    return 0;
}