#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque <int>d1={1,2,3,5,44,23,954,34,35,22};

    for(auto it=d1.begin();it!=d1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    int n;
    cout<<"which position you want to remove : ";
    cin>>n;

    d1.erase(d1.begin()+n-1);

    for(auto it=d1.begin();it!=d1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    int a,b;
    cout<<"enter the range of position you want to remove : ";
    cin>>a>>b;

    d1.erase(d1.begin()+a-1,d1.begin()+b-1);
    
    for(auto it=d1.begin();it!=d1.end();it++)
    {
        cout<<*it<<" ";
    }


    return 0;
    
}