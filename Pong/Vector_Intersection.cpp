#include<bits/stdc++.h>
using namespace std;
map<int,int> ma;
int a[200005],c[200005];
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(i=0;i<m;i++)
        scanf("%d",&c[i]);
    sort(c,c+m);
    for(i=0;i<m;i++)
    {
        int b=c[i];
        if(ma[b])
            continue ;
        ma[b]=1;
        int att=lower_bound(a,a+n,b)-a;
        if(a[att]==b)
            printf("%d ",b);
    }
    return 0;
}
