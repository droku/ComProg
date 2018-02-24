#include<iostream>

using namespace std;

int main6(){
    int t,x,y,p,c,n,k;
    cin >> t;
    int check;
    while(t--){
        cin >> x >> y >> k >> n;
        check = 0;
        for(int i=0;i<n;i++){
            cin >> p >> c;
            if(p >= x-y && c <= k){
                check = 1;
            }
        }
        if(check){
            cout << "LuckyChef"<<endl;
        }
        else{
            cout<<"UnluckyChef"<<endl;
        }
    }
    return 0;
}