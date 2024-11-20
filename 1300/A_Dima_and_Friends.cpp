#include <bits/stdc++.h>
using namespace std;
// get to learn about the modules usecase 
int main(){
    int t;
    cin>>t;
    int sum=0;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        sum+=a;
    }
    int cnt=0;
    for(int i=1;i<=5;i++){
        if((sum+i)%(t+1)!=1){
            cnt++;
        }
    }
    cout<<cnt;
   
    return 0;
}