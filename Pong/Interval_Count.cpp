#include<bits/stdc++.h>
using namespace std;
int a[200001];
int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,t,i,b,at1,at2;
    cin >> n >> m >> t;
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    while(m--)
    {
        cin >> b;
        at1=lower_bound(a,a+n,b-t)-a;
        at2=upper_bound(a,a+n,b+t)-a;
        cout << at2-at1 << " ";
    }
    return 0;
}
