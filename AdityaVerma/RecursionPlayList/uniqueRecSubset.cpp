#include <bits/stdc++.h>
using namespace std;

set<string> s;

void printSubsets(string str,int index,string curr){
    int n=str.length();

    if(index==n)return;

    s.insert(curr);

    for(int i=index+1;i<n;i++){
        curr+=str[i];
        printSubsets(str,i,curr);
        curr.erase(curr.size()-1);
    }

    return;
}

int main() {
    string str;
    cin>>str;

    printSubsets(str,-1,"");

    for(auto itr=s.begin();itr!=s.end();++itr)cout<<*itr<<"\n";

    return 0;
}
