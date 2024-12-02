#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<long long int> a, b;
    long long int v1, v2,n,res = 0;
 
    while(cin >> v1 >> v2){
        a.push_back(v1);
        b.push_back(v2);
    }
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    n = a.size();
    
    for(int i = 0;i < n;i++){
        res += abs(a[i] - b[i]);
    }
    
    cout << res << endl;
    
}