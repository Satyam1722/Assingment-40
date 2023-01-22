#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"enter a string : ";
    cin>>s;

    string ans="";

    int k=0,count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='#')
        {
            ans.erase(ans.size()-count);
            ans+=s[i];
            count=0;
        }
        else
        count++;
    }
    if(count>0)
    {
        ans.erase(ans.size()-count);
        count=0;
    }
 
    cout<<ans<<endl;

    return 0;
}