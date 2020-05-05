#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0,p=0;
    cout<<s.length()<<endl;
    for(int i=0;i<s.length();i++)
    {
        for(int j=0;j<s.length();j++)
        {
            if((s[i]==s[j])&&(i!=j))
            {
                break;
            }
            else
            {
                c++;
            }
        }
        //cout<<" c=  "<<c<<endl;
        if(c==(s.length()))
        {

            cout<<s[i]<<" "<<i;
            break;
        }
         else
         {
             p++;
         }
        c=0;
    }
    if(p==s.length())
    {
        cout<<-1;
    }
    return 0;
}
