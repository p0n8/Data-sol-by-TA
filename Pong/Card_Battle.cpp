#include<bits/stdc++.h>
using namespace std;
map <int,int> mapp;
map <int,int> :: iterator it;
int main()
{
    int n,m,i,a,ch;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        mapp[a]++;
    }
    for(i=1;i<=m;i++)
    {
        scanf("%d",&n);
        ch=0;
        while(n--)
        {
            scanf("%d",&a);
            it=mapp.upper_bound(a);
            if(it==mapp.end())
            {
                ch=1;
                break;
            }
            it->second--;
            if(it->second==0)
                mapp.erase(it);
        }
        if(ch)
            break;
    }
    printf("%d",i);
    return 0;
}
