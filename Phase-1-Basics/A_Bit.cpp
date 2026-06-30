#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int x =0;
    for(int i=0;i<n;i++){
           string word;
           cin>>word;
        if(word[1] == '+' ){
            x=x+1;
        }
        else{
            x=x-1;
        }
    }
    cout<<x<<"\n";
    return 0;
}