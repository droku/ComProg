#include<iostream>

using namespace std;

long long n;
long long x,sum =0;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin >> x;
            sum +=x;
        }
        if(sum==0){
            cout<<"Beginner"<<endl;
        }
        else if(sum==1){
            cout<<"Junior Developer"<<endl;
        }
        else if(sum ==2){
            cout<<"Middle Developer"<<endl;
        }
        else if(sum==3){
            cout<<"Senior Developer"<<endl;
        }
        else if(sum==4){
            cout<<"Hacker"<<endl;
        }
        else if(sum == 5){
            cout<<"Jeff Dean"<<endl;
        }
        sum = 0;
    }
    return 0;
}