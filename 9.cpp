#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque <int>d={1,2,3};
    vector<vector<int>> v(3);
    int i=0;
    cout<<"hello world"<<endl;
    do
    {
        v[i].assign(d.begin(),d.end());
        i++;
        cout<<"hello world"<<endl;
    } while (next_permutation(d.begin(),d.end()));
    
    cout<<v[0][0]<<" "<<endl;
}