#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator
it,int k) {
    int st=it-v.begin(),en=it-v.begin();
    if(st-k<0)
        st=0;
    else
        st-=k;
    if(en+k>=v.size())
        en=v.size()+1;
    else
        en+=k;
    vector <string> temp;
    for(int i=0;i<v.size();i++)
        if(i<st||i>en)
            temp.push_back(v[i]);
    return temp;
}
int main() {
    int n,j,k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0;i < n;i++) {
        cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result) {
        cout << x << endl;
    }
}
