#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s , t;
    cin>>s>>t;
    if (s.size() != t.size()) {
        cout << "NO"<<endl;
        return 0;
    }
    int i=0;
    int j=t.size()-1;
    while(i<s.size() && j>=0){
        if(s[i]==t[j]){
            i++;
            j--;
        }else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}