#include<bits/stdc++.h>
using namespace std;
map<string,int> ma;
map<string,int> :: iterator it;
int a[1005],coun;
char b[1000005];
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf(" %s",b);
        ma[b]++;
    }
    for(it=ma.begin();it!=ma.end();it++)
        a[coun++]=-it->second;
    sort(a,a+coun);
    if(m>coun)
        m=coun;
    printf("%d",-a[m-1]);
    return 0;
}
