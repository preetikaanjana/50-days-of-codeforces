#include <bits/stdc++.h>
using namespace std;
void implementedProblem(vector<int>&ans , int &count){
    int curr_count=0;
    for(int i=0;i<ans.size();i++){
        if(ans[i]==1){
            curr_count++;
        }
    }
    if(curr_count>=2){
        count++;
    }


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        vector<int>ans(3);
        for(int j=0;j<3;j++){
            cin>>ans[j];
        }
        implementedProblem(ans,count);
    }
   cout<<count<<"\n";
   return 0;
}