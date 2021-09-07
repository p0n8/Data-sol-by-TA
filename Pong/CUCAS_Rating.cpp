#include<bits/stdc++.h>
using namespace std;
map<string,int> m1,m2,m3,m4;
map<string,int> :: iterator it;
char a[10],b[10];
int c;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf(" %s %s %d",a,b,&c);
        m1[a]+=c;
        m2[a]++;
        m3[b]+=c;
        m4[b]++;
    }
    for(it=m1.begin();it!=m1.end();it++)
        printf("%s %.2lf\n",it->first.c_str(),(double)it->second/m2[it->first]);
    for(it=m3.begin();it!=m3.end();it++)
        printf("%s %.2lf\n",it->first.c_str(),(double)it->second/m4[it->first]);
    return 0;
}
