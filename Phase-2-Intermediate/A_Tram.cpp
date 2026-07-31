#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans=0;
    int maxAns=0;
    while(n>0){
        int a,b;
        cin>>a>>b;
        ans=ans-a;
        ans=ans+b;
        maxAns=max(maxAns,ans);
        n--;

    }
    cout<<maxAns;
    return 0;
}