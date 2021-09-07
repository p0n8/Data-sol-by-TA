#include <iostream>
#include <vector>
using namespace std;
void remove_even(vector<int> &v,int a,int b) {
    //write your code only in this function
    vector<int> c;
    int i;
    for(i=0;i<a;i++)
        c.push_back(v[i]);
    for(;i<=b;i++)
        if(i&1)
            c.push_back(v[i]);
    for(;i<v.size();i++)
        c.push_back(v[i]);
    v.clear();
    for(i=0;i<c.size();i++)
        v.push_back(c[i]);
}
int main() {
    //read input
    int n,a,b;
    cin >> n;
    vector<int> v;
    for (int i = 0;i < n;i++) {
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;
    //call function
    remove_even(v,a,b);
    //display content of the vector
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}
