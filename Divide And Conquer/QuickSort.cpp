#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>&nums,int low,int high){
    int i=low-1;
    int pivot = nums[high];
    for(int j=low;j<high;j++){
        if(nums[j]<=pivot){
            i++;
            swap(nums[i],nums[j]);
        }
    }
    swap(nums[i+1],nums[high]);
    return i+1;   
}
void quick_sort(vector<int>&nums,int low,int high){
    if(low<high){
    int pi=partition(nums,low,high);
    quick_sort(nums,low,pi-1);
    quick_sort(nums,pi+1,high);
    }
}


int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Unsorted Array";
    for(auto x:nums){
        cout<<x<<" ";
    }
    cout<<endl;
    quick_sort(nums,0,n-1);
    cout<<"Sorted Array:";
     for (auto x:nums) {
        cout <<x<<" ";
    }

}