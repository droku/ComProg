#include<iostream>

using namespace std;

int main(){
    long long n;
    long long x,flag;
    cin >> n;
    while(n--){
        cin >> x;
        flag = 0;
        for(int i=0;7*i<=x;i++){
            if((x - 7*i)%3 == 0){
                cout<<"YES"<<endl;
                flag = 1;
                break;
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}