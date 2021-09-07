#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main()
{
    int n,m,i,att,b,ch;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    while(m--)
    {
        scanf("%d",&b);
        ch=0;
        for(i=0;i<n;i++)
        {
            att=lower_bound(a,a+n,b-a[i])-a;
            att+=att==i; // if(att==i) +1 else +0
            if(a[att]==b-a[i])
            {
                ch=1;
                break;
            }
        }
        if(ch)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
