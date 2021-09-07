#include<bits/stdc++.h>
using namespace std;
map <string,int> m;
map <string,int> :: iterator it;
char a[1000];
string ans;
int ma;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf(" %s",a);
        m[a]++;
    }
    for(it=m.end();it!=m.begin();)
    {
        it--;
        if(it->second>ma)
            ans=it->first,ma=it->second;
    }
    printf("%s %d",ans.c_str(),ma);
    return 0;
}
