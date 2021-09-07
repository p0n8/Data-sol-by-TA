#include<bits/stdc++.h>
using namespace std;
map<long long,long long> p;
long long fi(long long v)
{
    if(p[v]==0||p[p[v]]==0)
        return -1;
    return p[p[v]];
}
int main()
{
    long long i,j,n,m,a,b;
    scanf("%lld %lld",&n,&m);
    //printf("%lld\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b);
        p[b]=a;
        //printf("%lld %lld\n",i,n);
    }
    while(m--)
    {
        scanf("%lld %lld",&a,&b);
        if(a==b)
        {
            printf("NO\n");
            continue ;
        }
        a=fi(a);
        b=fi(b);
        if(a==-1||b==-1)
            printf("NO\n");
        else if(a==b)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
