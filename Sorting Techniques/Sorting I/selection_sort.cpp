//SELECTION SORT
#include<bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>& nums)
{
    int n = nums.size();
    int mini = 0;
    for(int i=0;i<n;i++)
    {
        mini = i;
        for(int j = i+1;j<n;j++)
        {
            if(nums[j] < nums[mini])
            {
                mini = j;
            }
        }
        int temp = nums[i];
        nums[i] = nums[mini];
        nums[mini] = temp;
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
    selection_sort(nums);
}
