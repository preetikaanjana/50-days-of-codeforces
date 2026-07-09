#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int step=0;
    while(a>0){
    if(a>=5){
        step++;
        a=a-5;
    }else{
        a=0;
        step++;
    }
  
 }
 cout<<step;
 return 0;
}