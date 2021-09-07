#include<bits/stdc++.h>
using namespace std;
int num[1000005];
map <int,int> ty[1000005];
map <int,int> :: iterator it;
struct A
{
    int i,val;
    bool operator < (const A& o) const
    {
        if(val!=o.val)
            return val>o.val;
        return i>o.i;
    }
};
vector <A> temp;
vector <int> ans[1000005];
int main()
{
    char a;
    int n,m,q,i,j,b,c,d;
    scanf("%d %d %d",&n,&m,&q);
    for(i=1;i<=n;i++)
        scanf("%d",&num[i]);
    while(q--)
    {
        scanf(" %c",&a);
        if(a=='B')
        {
            scanf("%d %d %d",&b,&c,&d);
            ty[c][b]=d;
        }
        if(a=='W')
        {
            scanf("%d %d",&b,&c);
            ty[c][b]=0;
        }
    }
    for(i=1;i<=n;i++)
    {
        temp.clear();
        for(it=ty[i].begin();it!=ty[i].end();it++)
        {
            if(it->second==0)
                continue;
            temp.push_back({it->first,it->second});
        }
        sort(temp.begin(),temp.end());
        for(j=0;j<num[i]&&j<temp.size();j++)
            ans[temp[j].i].push_back(i);
    }
    for(i=1;i<=m;i++)
    {
        if(ans[i].size()==0)
            printf("NONE");
        for(j=0;j<ans[i].size();j++)
            printf("%d ",ans[i][j]);
        printf("\n");
    }
    return 0;
}
