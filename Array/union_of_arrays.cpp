#include<iostream>
#include<vector>
using namespace std;

vector <int> unionArrays(vector<int>&a, vector<int>& b){
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    vector<int> merge;
    while(i<n && j<m){
        if(a[i] < b[j]){
            if(merge.size() == 0 || merge.back() != a[i]){
                merge.push_back(a[i]);
            }
            i++;
        }
        else{
            if(merge.size() == 0 || merge.back() != b[j]){
                merge.push_back(b[j]);
            }
            j++;
        }
    }

    while(i<a.size()){
        if(merge.size() == 0 || merge.back() != a[i]){
                merge.push_back(a[i]);
            }
            i++;
    }

    while(j<b.size()){
        if(merge.size() == 0 || merge.back() != b[j]){
                merge.push_back(b[j]);
            }
            j++;
    }
    return merge;
}

int main(){
    vector<int> a = {1, 2, 4, 6};
    vector<int> b = {2, 3, 5};

    vector<int> merged = unionArrays(a, b);
    for(int i=0; i< merged.size(); i++){
        cout<<merged[i]<<" ";
    }
    return 0;

}