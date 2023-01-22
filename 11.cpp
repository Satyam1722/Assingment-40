#include<bits/stdc++.h>
using namespace std;

template <class t=int>
t first_element(deque<int> &d)
{
    return d.front();
}

template <class t=int>
t last_element(deque<int> &d)
{
    return d.back();
}

int main()
{
    deque <int>d={1,3};
    cout<<"front element is : "<<first_element<int>(d)<<endl;
    cout<<"last element is : "<<last_element<int>(d)<<endl;

    return 0;
}