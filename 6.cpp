#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque <int>d1={1,2,3,5};
    deque <int>d2(d1.begin(),d1.end());

    for(auto it=d2.begin();it!=d2.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
    
}