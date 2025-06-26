#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&nums,int low,int mid,int high)
{
    vector<int>temp;
    
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high)
    {
        if(nums[left] <= nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }
        else
        {
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left <= mid)
    {
        temp.push_back(nums[left]);
        left++;
    }
    while(right <= high)
    {
        temp.push_back(nums[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        nums[i] = temp[i-low];
    }
}
void mergesort(vector<int>&nums,int low,int high)
{
    if(low >= high) return;
    int mid = (low + high)/2;
    
    mergesort(nums,low,mid);
    mergesort(nums,mid+1,high);
    merge(nums,low,mid,high);
}
int main()
{
    vector<int>nums = {5,6,4,7,3,1,2};
    int n = nums.size();
    int low = 0,high = n-1;
    mergesort(nums,low,high);
    for(int num : nums)
    {
        cout<<num<<" ";
    }
}
