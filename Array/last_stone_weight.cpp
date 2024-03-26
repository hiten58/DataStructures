// #include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// **Brute Force Approach->

// class Solution {
// public:
//     int lastStoneWeight(vector<int>& stones) 
//     {
//         priority_queue<int, vector<int>>p;
//         for(int i=0;i<stones.size();i++)
//         {
//             p.push(stones[i]);
//         }
//         while(p.size()!=1 && p.size())
//         {
//             int a = p.top();
//             p.pop();
//             int b = p.top();
//             p.pop();
//             int c = max(a,b) - min(a,b);
//             if(c)
//             {
//                 p.push(c);
//             }
//         }
//         if(p.size())
//         {
//             return p.top();
//         }
//         return 0;
//     }
// };

int lastStoneWeight(vector<int>stones){
    priority_queue<int> p;

    for(auto it:stones){
        p.push(it);
    }
    // for (int i = 0; i < stones.size(); i++) {
    //     p.push(stones[i]);
    // }

    while(p.size() > 1){
        int x = p.top(); 
        p.pop();
        int y = p.top(); 
        p.pop();

        p.push(x-y);
    }

    return p.top();
}

int main(){
    // Solution s;

    vector<int> stones = {1};
    // cout<<s.lastStoneWeight(stones);

    cout<<lastStoneWeight(stones);

    return 0;
}