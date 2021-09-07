#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include<stack>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
    stack<int> sta;
    int a,b;
    for(int i=0;i<v.size();i++)
    {
        if(v[i].first)
            sta.push(v[i].second);
        else
        {
            b=sta.top();
            sta.pop();
            a=sta.top();
            sta.pop();
            switch(v[i].second)
            {
                case 0: a+=b; break;
                case 1: a-=b; break;
                case 2: a*=b; break;
                case 3: a/=b; break;
            }
            sta.push(a);
        }
    }
    return sta.top();
}

#endif
