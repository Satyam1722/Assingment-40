#include<bits/stdc++.h>
using namespace std;

auto maxsize(deque<int> d)
{
    return d.max_size();
}

int main()
{
    deque <int>d={1,3};
    cout<<maxsize(d);
    return 0;
}