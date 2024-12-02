#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<long long int> a;
    map<long long int,long long int> mp;
    
    long long int v1 ,v2,res = 0;
    while(cin >> v1 >> v2){
        a.push_back(v1);
        mp[v2]++;
    }
    
    for(long long int i : a){
        res += (i * mp[i]);
    }
    
    cout << res << endl;
    
}