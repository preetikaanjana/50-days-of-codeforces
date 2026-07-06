#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int ans=0;
    for(int i=1;i<=w;i++){
        ans+=k*i;
    }
    if(ans-n<0){
        cout<<0;
    }else{
        cout<<ans-n;
    }
    return 0;
}   