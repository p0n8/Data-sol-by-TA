#include <iostream>
#include <vector>
using namespace std;
void vector_swap(vector<int> &v1,vector<int> &v2, int start1, int end1, int start2, int end2) {
    vector<int> vec1,vec2,vec3,vec4;
    int i;
    for(i=start1;i<end1;i++)
        vec1.push_back(v1[i]);
    for(;i<v1.size();i++)
        vec2.push_back(v1[i]);
    while(v1.size()!=start1)
        v1.pop_back();
    for(i=start2;i<end2;i++)
        vec3.push_back(v2[i]);
    for(;i<v2.size();i++)
        vec4.push_back(v2[i]);
    while(v2.size()!=start2)
        v2.pop_back();
    for(i=0;i<vec1.size();i++)
        v2.push_back(vec1[i]);
    for(i=0;i<vec3.size();i++)
        v1.push_back(vec3[i]);
    for(i=0;i<vec2.size();i++)
        v1.push_back(vec2[i]);
    for(i=0;i<vec4.size();i++)
        v2.push_back(vec4[i]);
}
int main() {
    //read input
    int n,c;
    vector<int>v1,v2;
    cin >> n; //number of v1
    for (int i = 0;i < n;i++) {
        cin >> c;
        v1.push_back(c);
    }
    cin >> n; //number of v2
    for (int i = 0;i < n;i++) {
        cin >> c;
        v2.push_back(c);
    }
    int s1,e1,s2,e2; //position
    cin >> s1 >> e1 >> s2 >> e2;
    //call the function
    vector_swap(v1,v2,s1,e1,s2,e2);
    //display content of the stack
    cout << "v1 has " << v1.size() << endl;
    for (auto &x : v1) { cout << x << " "; }
        cout << endl;
    //display content of the stack
    cout << "v2 has " << v2.size() << endl;
    for (auto &x : v2) { cout << x << " "; }
        cout << endl;
}
/*
5
0 1 2 3 4
5
50 51 52 53 54
*/
