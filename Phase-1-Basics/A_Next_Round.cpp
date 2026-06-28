#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;
    vector<int>contestant(n);
    for(int i=0;i<n;i++){
        cin>>contestant[i];
    }
    int num=contestant[k-1];
    int count=0;
    for(int i=0;i<n;i++){
        if(contestant[i]>=num &&contestant[i] > 0){
            count++;
        }
    }
    cout<<count;
    return 0;

}