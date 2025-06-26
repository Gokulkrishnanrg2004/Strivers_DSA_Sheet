#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>maxh = {10,9,8,7,6,5};
    vector<int>minh = {1,2,3,4,5,6};
    
    //convert max heap to min heap
    priority_queue<int,vector<int>,greater<int>>min_heap;
    for(int num : maxh)
    {
        min_heap.push(num);
    }
    cout<<"Converted min heap : ";
    while(!min_heap.empty())
    {
        cout<<min_heap.top()<<" ";
        min_heap.pop();
    }
    cout<<endl;
    
    //convert min heap to max heap
    priority_queue<int>max_heap;
    for(int num : minh)
    {
        max_heap.push(num);
    }
    cout<<"Converted max heap : ";
    while(!max_heap.empty())
    {
        cout<<max_heap.top()<<" ";
        max_heap.pop();
    }
    cout<<endl;
}
