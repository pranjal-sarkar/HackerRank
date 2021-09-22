#include<iostream>
using namespace std;

int main(){
    int grades[60];
    int n, quo, rem;

    cin>>n;
    for(int i=0;i<n;i++)
        cin>>grades[i];

    // cout<<endl;
    
    for(int i=0;i<n;i++){
        quo = grades[i]/10;
        // rem = grades[i]%10;
        if(grades[i] < 38){
            cout<<grades[i]<<endl;
            continue;
        }
        if((quo*10)+5 >= grades[i] && (-grades[i]+(quo*10)+5)<3){
            grades[i] = quo*10 + 5;
        }
        if((quo*10)+5 <= grades[i] && (-grades[i]+(quo+1)*10)<3){
            grades[i] = (quo+1)*10;
        }
        cout<<grades[i]<<endl;
    }

    return 0;
}