#include<bits/stdc++.h>
using namespace std;
void pt(int n){
    map<int,int> m;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            while(n%i==0){
                m[i]++;
                n/=i;
            }
    }
    if(n>1)
        m.insert({n,1});
    for(auto it=m.begin();it!=m.end();it++){
        if(it!=--m.end())
            cout<<(*it).first<<"^"<<(*it).second<<" * ";
        else cout<<(*it).first<<"^"<<(*it).second;
    }        
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pt(n);
        cout<<"\n";
    }
}