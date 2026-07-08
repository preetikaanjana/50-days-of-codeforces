#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;
    int year = floor(log(b / a) / log(1.5)) + 1;
    cout<<year;
    return 0;
}