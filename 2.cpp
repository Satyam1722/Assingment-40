#include<bits/stdc++.h>
using namespace std;

auto iter(deque<int> &d)
{
    return d.rbegin();
} 

int main()
{
    deque <int>d;
    d.push_back(5);
    auto it=iter(d);
    cout<<*it<<endl;

    return 0;
}