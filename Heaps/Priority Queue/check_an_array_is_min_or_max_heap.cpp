#include<bits/stdc++.h>
using namespace std;
bool isMinHeap(vector<int>&nums)
{
    int n = nums.size();
    for(int i=0;2*i+1<n;i++)
    {
        int left = 2*i+1;
        int right = 2*i+2;
        
        if(left < n && nums[i] > nums[left])
        {
            return false;
        }
        if(right < n && nums[i] > nums[right])
        {
            return false;
        }
    }
    return true;
}
bool isMaxHeap(vector<int>&nums)
{
    int n = nums.size();
    for(int i=0;2*i+1<n;i++)
    {
        int left = 2*i+1;
        int right = 2*i+2;
        
        if(left < n && nums[i] < nums[left])
        {
            return false;
        }
        if(right < n && nums[i] < nums[right])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int>nums = {10,9,8,7,6,5};
    if(isMinHeap(nums))
    {
        cout<<"It is a min heap";
    }
    else if(isMaxHeap(nums))
    {
        cout<<"It is a max heap";
    }
    else 
    {
        cout<<"It is neither min heap nor max heap";
    }
}
