#include<bits/stdc++.h>
using namespace std;
class Letter{
public:
    string name; string address; string province; string district; int zip;
    bool operator < (const Letter& other) const {
        if(zip!=other.zip)
            return zip<other.zip;
        if(address+district+province!=other.address+other.district+other.province)
            return address+district+province<other.address+other.district+other.province;
        return name<other.name;
    }
};
class ZipInfo{
public:
    int zip;
    string province;
    string district;
};
void correctZipAndSortLetters(vector<ZipInfo>& zipinfo, vector<Letter>& letters) {
    map <pair <string,string> , int> m;
    for(int i=0;i<zipinfo.size();i++)
        m[{zipinfo[i].district,zipinfo[i].province}]=zipinfo[i].zip;
    for(int i=0;i<letters.size();i++)
        letters[i].zip=m[{letters[i].district,letters[i].province}];
    sort(letters.begin(),letters.end());
}
int main() {
    int nzip;
    cin>>nzip;
    vector<ZipInfo> zipinfo;
    for (int i = 0; i < nzip; i++)
    {
        ZipInfo z;
        cin>>z.zip>>z.district>>z.province;
        zipinfo.push_back(z);
    }
    int n;
    cin>>n;
    vector<Letter> letters;
    for (int i = 0; i < n; i++)
    {
        Letter l;
        cin>>l.name>>l.address>>l.district>>l.province>>l.zip;
        letters.push_back(l);
    }
    correctZipAndSortLetters(zipinfo, letters);
    for (auto& l:letters)
        cout<<l.name<<" "<<l.address<<" "<<l.district<<" "<<l.province<<" "<<l.zip<<endl;
    return 0;
}
