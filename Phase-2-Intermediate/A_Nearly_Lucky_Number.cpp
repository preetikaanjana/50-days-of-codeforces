#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int count=0;
    while(n>0){
        int k=n%10;
        if(k==4 || k==7){
            count++;
        }
        n=n/10;
    }
    if(count==7 || count==4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}