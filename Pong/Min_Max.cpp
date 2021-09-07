#include<cstdio>
#include<algorithm>
using namespace std;
int a[105][105];
int main()
{
    int n,m,i,j,ma,q,b,c,d,e;
    scanf("%d %d",&n,&m);
    scanf("%d",&q);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    while(q--)
    {
        ma=-1<<30;
        scanf("%d %d %d %d",&b,&c,&d,&e);
        b--;
        c--;
        d--;
        e--;
        if(b>d||c>e)
        {
            printf("INVALID\n");
            continue ;
        }
        for(i=max(b,0);i<=min(d,n-1);i++)
            for(j=max(c,0);j<=min(e,m-1);j++)
                ma=max(ma,a[i][j]);
        if(ma==-1<<30)
            printf("OUTSIDE\n");
        else
            printf("%d\n",ma);
    }
    return 0;
}
