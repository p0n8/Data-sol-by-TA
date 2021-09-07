#include<cstdio>
using namespace std;
int num[100005];
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a<1||a>n)
        {
            printf("NO\n");
            return 0;
        }
        num[a]++;
    }
    for(i=2;i<=n;i++)
        if(num[i]!=num[i-1])
        {
            printf("NO\n");
            return 0;
        }
    printf("YES\n");
    return 0;
}
