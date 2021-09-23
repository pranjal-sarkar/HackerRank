#include<bits/stdc++.h>
using namespace std;

#define height_count 26

// void solve(int[], char[]);

void solve(int heights[], char letter[]){
    int i=0;
    int index;
    int max_height=0;

    while(letter[i]!='\0'){
        index = letter[i] - 'a';
        max_height = max(max_height, heights[index]);

        i++;
    }

    cout<<max_height * i;
}

int main(){
    int heights[height_count];
    char letter[10];
    int i;

    for(i=0;i<height_count;i++){
        cin>>heights[i];
    }
    fflush(stdin);

    // gets(letter);
    cin>>letter;

    solve(heights, letter);

    return 0;
}

