#include<bits/stdc++.h>
using namespace std;

int LinearSearch(vector<int>& nums, int k){
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == k) return i;
    }
    return -1;
}

int main(){
    vector<int> nums{3,5,2,6,0,7,9};
    int k;

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

    cout<<"\nEnter a number to search in the given array: "<<endl;
    cin>>k;
    
    int found = LinearSearch(nums, k);

    if(found == -1){
        cout<<"Element is not present in the given array!!!";
    }else{
        cout<<"Number you entered has been found at index -> "<<found;
    }

    return 0;
}