//INSERTION SORT
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>& nums)
{
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        int j = i;
        while(j>0 && nums[j-1] > nums[j])
        {
            int temp = nums[j];
            nums[j] = nums[j-1];
            nums[j-1] = temp;
            j--;
        }
    }
    for(int num : nums)
    {
        cout<<num<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    insertion_sort(nums);
}
