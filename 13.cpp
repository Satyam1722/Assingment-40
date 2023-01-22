#include<forward_list>
#include<deque>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    forward_list <int>f={1,2,3,4,5,6,7,8};
    deque <int>d;

    for(auto i : f)
    {
        if(i%2==0)
        d.push_front(i);
        else
        d.push_back(i);
        
    }

    for(auto i : d)
    cout<<i<<" ";

    return 0;
}