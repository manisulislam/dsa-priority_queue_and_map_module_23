#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int>mp;
    mp["anis"]=100;
    mp["ahad"]=50;
    mp["fahad"]=150;
    for(auto it = mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}