#include<bits/stdc++.h>
using namespace std;
int a[400000],coun;
int main()
{
    int n,m,b,c,att;
    scanf("%d %d",&n,&m);
    while(n--)
    {
        scanf("%d %d",&b,&c);
        a[coun++]=b;
        a[coun++]=c+1;
    }
    sort(a,a+coun);
    while(m--)
    {
        scanf("%d",&b);
        att=upper_bound(a,a+coun,b)-a;
        if(att%2)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}
