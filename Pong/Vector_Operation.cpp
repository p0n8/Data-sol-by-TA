#include<bits/stdc++.h>
using namespace std;
vector<int> a,b;
char c[10];
int main()
{
    int q,i;
    scanf("%d",&q);
    while(q--)
    {
        scanf(" %s",c);
        if(!strcmp(c,"pb"))
        {
            scanf("%d",&i);
            a.push_back(i);
        }
        else if(!strcmp(c,"sa"))
            sort(a.begin(),a.end());
        else if(!strcmp(c,"sd"))
        {
            for(i=0;i<a.size();i++)
                a[i]*=-1;
            sort(a.begin(),a.end());
            for(i=0;i<a.size();i++)
                a[i]*=-1;
        }
        else if(!strcmp(c,"r"))
        {
            b=a;
            for(i=0;i<a.size();i++)
                b[a.size()-i-1]=a[i];
            a=b;
        }
        else
        {
            scanf("%d",&i);
            a.erase(a.begin()+i);
        }
    }
    for(i=0;i<a.size();i++)
        printf("%d ",a[i]);
    return 0;
}
