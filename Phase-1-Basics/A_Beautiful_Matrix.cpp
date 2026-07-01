#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 0, y = 0; 
    
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            int value;
            cin >> value;
            if(value != 0){
                x = abs(3 - i);
                y = abs(3 - j);
            }
        }
    }
    
    cout << x + y << "\n"; 
    return 0;
}
