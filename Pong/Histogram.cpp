#include<bits/stdc++.h>
using namespace std;
map<string,int> m;
map<string,int> :: iterator it;
char a[1005];
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf(" %s",a);
        m[a]++;
    }
    for(it=m.begin();it!=m.end();it++)
        if(it->second>1)
            printf("%s %d\n",it->first.c_str(),it->second);
    return 0;
}
