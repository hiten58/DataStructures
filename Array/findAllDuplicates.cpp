#include<bits/stdc++.h>
using namespace std;

vector<int> isDuplicate(vector<int>& nums){
    vector<int> res;
    for(int i=0; i<nums.size(); i++){
        int ind = abs(nums[i])-1;
        if(nums[ind] < 0){
            res.push_back(ind+1);
        }else{
            nums[ind] = -nums[ind];
        }
    }
    return res;
}

int main(){
    vector<int> nums{6,3,8,0,8,9,0};

    vector<int> ans = isDuplicate(nums);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}