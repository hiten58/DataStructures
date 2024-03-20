#include<iostream>
#include<vector>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, int k){
    int n = a.size();
    int left = 0; 
    int right = 0;
    int sum = a[0];
    int maxLen = 0;

    while(right < n){
        while(left <= right && sum > k){
            sum -= a[left];
            left++;
        }

        if(sum == k){
            maxLen = max(maxLen, right-left+1);
        }

        right++;
        if(right < n){
            sum += a[right];
        }
        
    }
    return maxLen;

}

int main(){
    vector<int> arr{8, 15, 17, 0, 11};
    int k = 17;
    int ans = longestSubarrayWithSumK(arr, k);

    cout<<ans;

    return 0;

}