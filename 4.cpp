#include<bits/stdc++.h>
using namespace std;
 
auto iter(deque<int> &d)
{
    return d.begin();
} 

int main()
{
    deque <int>d={1,3};
    deque<int>::const_iterator it;
    it=iter(d);
    cout<<*it;
    return 0;
}