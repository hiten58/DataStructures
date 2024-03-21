#include<bits/stdc++.h>
using namespace std;

vector<int>bubbleSort(vector<int>& nums){
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[j]< nums[i]){
                swap(nums[j], nums[i]);
            }
        }
    }
    return nums;
}

int main(){
    vector<int> nums = {6,0,3,5};

    bubbleSort(nums);

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}