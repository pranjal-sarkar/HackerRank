// for magic square watch YT tutorial
// https://www.youtube.com/watch?v=zPnN046OM34

#include<iostream>
using namespace std;

int main(){
    int x[8][3][3] = {{6, 7, 2, 1, 5, 9, 8, 3, 4},
                      {2, 7, 6, 9, 5, 1, 4, 3, 8},
                      {4, 9, 2, 3, 5, 7, 8, 1, 6},
                      {2, 9, 4, 7, 5, 3, 6, 1, 8},
                      {8, 3, 4, 1, 5, 9, 6, 7, 2},
                      {4, 3, 8, 9, 5, 1, 2, 7, 6},
                      {8, 1, 6, 3, 5, 7, 4, 9, 2},
                      {6, 1, 8, 7, 5, 3, 2, 9, 4}};
    
    int inp[3][3];
    int sum[8]={0};
    int min = INT8_MAX;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>inp[i][j];
        }
    }

    for(int i=0;i<8;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                sum[i] += abs(x[i][j][k] - inp[j][k]);
            }
        }
    }

    for(int i=0;i<8;i++){
        if(min>sum[i]){
            min = sum[i];
        }
    }

    cout<<min;

    return 0;
}