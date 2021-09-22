#include<iostream>
using namespace std;

int main(){
    int n, p_diag=0, s_diag=0, diff;
    int mat[100][100];

    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0;i<n;i++){
        p_diag += mat[i][i];
        s_diag += mat[i][n-i-1];
        // cout<<s_diag<<endl;
    }

    diff = (p_diag>s_diag)?p_diag-s_diag:s_diag-p_diag;

    // cout<<p_diag<<" "<<s_diag;

    cout<<diff;

    return 0;
}