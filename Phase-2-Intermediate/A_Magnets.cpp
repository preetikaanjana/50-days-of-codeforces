#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    if (!(cin >> n) || n <= 0) {
        cout << 0;
        return 0;
    }
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}