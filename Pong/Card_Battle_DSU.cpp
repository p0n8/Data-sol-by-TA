#include<bits/stdc++.h>
using namespace std;
int p[500005],a[500005];
int findroot(int v)
{
    if(p[v]==v)
        return v;
    return p[v]=findroot(p[v]);
}
int main()
{
    int n,m,i,b,ch,att,c;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        p[i+1]=i+1;
    }
    sort(a,a+n);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&b);
        ch=0;
        while(b--)
        {
            scanf("%d",&c);
            att=upper_bound(a,a+n,c)-a;
            att=findroot(att);
            if(att==n)
            {
                ch=1;
                break;
            }
            p[att]=att+1;
        }
        if(ch)
            break;
    }
    printf("%d",i);
    return 0;
}
