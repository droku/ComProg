#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    int t;
    int cnta=0,cntb=0,cka=0,ckb=0,dots=0;
    cin >> t;
    while(t--){
        cin >> s;
        int cnta=0,cntb=0,cka=0,ckb=0,dots=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='.'){
                dots++;
                continue;
            }
            if(s[i]=='A'){
                if(ckb>0 && cka == 0){
                    cka=1;
                    ckb = 0;
                    dots = 0;
                    cnta++;
                    continue;
                }
                if(cka==0&&ckb==0){
                    cka =1;
                    cnta++;
                    dots =0;
                    continue;
                }
                if(cka==1){
                    cnta += dots + 1;
                    dots = 0;
                    
                }
            }
            if(s[i]=='B'){
                if(cka >0&&ckb==0){
                    ckb = 1;
                    cka = 0;
                    dots = 0;
                    cntb++;
                    continue;
                }
                if(ckb==0&&cka==0){
                    ckb=1;
                    cntb++;
                    dots = 0;
                    continue;
                }
                if(ckb==1){
                    cntb += dots+1;
                    dots = 0;
                }
            }
        }
        cout<<cnta<<" "<<cntb<<endl;
    }
    return 0;
}