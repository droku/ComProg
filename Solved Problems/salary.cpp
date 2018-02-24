#include<iostream>

using namespace std;

int main(){
    int t,n;
    int sum,x,min;
    cin >> t;
    while(t--){
        cin >> n;
        sum =0;
        min = 999999;
        for(int i=0;i<n;i++){
            cin >> x;
            sum += x;
            if(x<min){
                min = x;
            }
        }
        cout << sum - n*min << endl;
    }
    return 0;
}