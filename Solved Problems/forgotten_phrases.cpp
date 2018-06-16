#include<iostream>
#include<string>

using namespace std;

int main(){
    int t;
    long long n,sum;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        sum =0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                sum = sum+1;
            }
        }
        cout<< (sum*(sum+1))/2<<endl;
    }
    return 0;
}