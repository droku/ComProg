#include<iostream>

using namespace std;

int main(){
    int t,n,k,x,chk;
    cin >> t;
    while(t--){
        cin >> n >> k;
        chk = 0;
        for(int i=0;i<n;i++){
            cin >> x;
            if((x+k)%7==0){
                chk = chk+1;
            }
        }
        cout << chk << endl;
    }
    return 0;
}