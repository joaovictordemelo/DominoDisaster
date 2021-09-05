


#include <bits/stdc++.h>


using namespace std;

typedef long long ll;


void test(){
    
    int n;
    cin >> n;
    char s[n];
    char ans[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    for(int i = 0; i < n; i++){
        if(s[i] == 'R') ans[i] = 'R';

        if(s[i] == 'L') ans[i] = 'L';

        if(s[i] == 'U') ans[i] = 'D';
        
        if(s[i] == 'D') ans[i] = 'U';
    }
    
    for(int i = 0; i < n; i++){
        
        cout << ans[i];
    }
    
    cout << endl;
    


}

int main(){
    
    int t;
    cin >> t;
    while(t--){
        
        test();
    }
    
}