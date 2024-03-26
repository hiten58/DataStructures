#include<bits/stdc++.h>
using namespace std;




//*****Its my Brute Force Approach************ 
int isDuplicate(vector<int>nums){
    unordered_map<int, int> mpp;
    for(auto it:nums){
        mpp[it]++;
    }

    // for(auto it: mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }

    int ans;

    for(auto it:mpp){
        if(it.second > 1){
            ans = it.first;
            break;
        }
    }
    return ans;

}

int main(){
    vector<int> nums{6,3,8,0,8,9,0};

    int ans = isDuplicate(nums);

    cout<<ans<<endl;

    return 0;
}