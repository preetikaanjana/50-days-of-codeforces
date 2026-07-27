#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int anton=0;
    int danik=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            anton=anton+1;
        }else{
            danik=danik+1;
        }
    }
    if(anton>danik){
        cout<<"Anton"<<endl;
    }else if(danik > anton){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}