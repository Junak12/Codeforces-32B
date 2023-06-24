#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    opt();
    string s;
    cin>>s;
    for(int i=0;i<s.size();)
    {
        if(s[i]=='-' && s[i+1]=='-')
        {
            cout<<"2";
            i=i+2;
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            cout<<"1";
            i=i+2;
        }
        else
        {
            cout<<"0";
            i++;
        }
    }
    cout<<endl;
    return 0;
}
