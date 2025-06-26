#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums = {1,1,1,2,2,3};
    int k = 2;
    unordered_map<int,int>mp;
    for(int num : nums)
    {
        mp[num]++;
    }
    priority_queue<pair<int,int>>pq;
    for(auto num : mp)
    {
        pq.push({num.second,num.first});
    }
    vector<int>result;
    while(k--)
    {
        result.push_back(pq.top().second);
        pq.pop();
    }
    for(int num : result)
    {
        cout<<num<<" ";
    }
}
