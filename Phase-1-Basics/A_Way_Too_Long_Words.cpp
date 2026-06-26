#include <bits/stdc++.h>
using namespace std;
string way_too_long_words(string str){
    if(str.length()>10){
    char first= str[0];
    char last= str[str.length()-1];
    int inner=str.length()-2;
    string result= first+to_string(inner)+last;
    return result;
    }
return str;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int total_words;
    cin>>total_words;
    cin.ignore();
    for(int i=0;i<total_words;i++){
        string word;
       getline(cin,word);
       cout<<way_too_long_words(word)<<"\n";
    }
    return 0;
}