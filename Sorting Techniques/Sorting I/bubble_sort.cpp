//BUBBLE SORT
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int>& nums)
{
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(nums[j] > nums[j+1])
            {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
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
    bubble_sort(nums);
}
