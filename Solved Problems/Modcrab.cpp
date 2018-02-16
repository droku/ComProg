#include<iostream>
#include<string>
using namespace std;
string s[100001];
int main(){
    int h1,a1,h2,a2,c1,cnt=0;
    cin >> h1 >> a1 >> c1 >> h2 >> a2;
    while(1){
        cnt = cnt + 1;
        if(h2-a1<=0){
            s[cnt - 1] = "STRIKE";
            break;
        }
        if(h1-a2>0){
            s[cnt - 1] = "STRIKE";
            h2 = h2 - a1;
        }
        else{
            s[cnt - 1] = "HEAL";
            h1 = h1 + c1;
        }
        h1 = h1 - a2;
    }
    cout<< cnt <<endl;
    for(int i=0;i<cnt;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}