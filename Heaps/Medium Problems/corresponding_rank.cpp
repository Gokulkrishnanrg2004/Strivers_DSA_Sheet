#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums = {7,4,5,6,3,2,1};
    vector<int>arr = nums;
    sort(arr.begin(),arr.end());
    unordered_map<int,int>mp;
    int rank = 1;
    for(int num : arr)
    {
        if(mp.find(num) == mp.end())
        {
            mp[num] = rank;
            rank++;
        }
    }
    cout<<"The rank is : ";
    for(int num : nums)
    {
        if(mp.find(num) != mp.end())
        {
            cout<<mp[num]<<" ";
        }
    }
}
