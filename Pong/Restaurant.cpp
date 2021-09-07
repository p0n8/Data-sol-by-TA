#include<bits/stdc++.h>
using namespace std;
struct A
{
    int t,att;
    bool operator < (const A& o) const
    {
        return t>o.t;
    }
};
priority_queue <A> q;
int a[1000005];
int main()
{
    A temp;
    int n,m,i;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        q.push({0,i});
    }
    while(m--)
    {
        printf("%d\n",q.top().t);
        temp=q.top();
        q.pop();
        temp.t+=a[temp.att];
        q.push(temp);
    }
    return 0;
}
