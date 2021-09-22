#include<bits/stdc++.h>
using namespace std;

#define height_count 26

void solve(int[], char[]);

int main(){
    int heights[height_count];
    char letter[10];
    int n, i;

    for(i=0;i < height_count;i++){
        cin>>heights[i];
    }

    gets(letter);

    solve(heights, letter);

    return 0;
}

void solve(int heights[], char letter[]){
    int i=0;
    int curr_height=0;
    int index;
    int max_height;

    while(letter[i]!='\0'){
        index = letter[i] - 'a';
        max_height = max(curr_height, heights[index]);

        i++;
    }

    cout<<max_height*strlen(letter);
}