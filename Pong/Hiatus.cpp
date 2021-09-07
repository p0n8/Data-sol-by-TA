#include<bits/stdc++.h>
using namespace std;
pair<int,int> a[200000],d;
int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,b,c,i,att;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> b >> c;
        a[i]={b,c};
    }
    sort(a,a+n);
    while(m--){
        cin >> b >> c;
        d={b,c};
        att=lower_bound(a,a+n,d)-a;
        if(a[att]==d) cout << "0 0 ";
        else if(--att<0) cout << "-1 -1 ";
        else cout << a[att].first << " " << a[att].second << " ";
    }
    return 0;
}
