// #include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int lastStoneWeigt(vector<int>& stones){
    int n = stones.size();
    sort(stones.begin(), stones.end());
    for(int i=0; i<n; i++){
        int x = stones[i-2];
        int y = stones[i-1];

        if(x == y){
            n-2;
        }else{
            y = y-x;
            
        }
    }
}

int main(){
    vector<int> stones = {2,7,4,1,8,1};
    
}