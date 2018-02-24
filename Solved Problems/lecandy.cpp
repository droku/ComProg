#include<iostream>

using namespace std;

int main(){
    int t,n,sum=0,c,x;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> c;
        for(int i=0;i<n;i++){
            cin >> x;
            sum += x;
        }
        if(sum<=c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        sum = 0;
    }
    return 0;
}