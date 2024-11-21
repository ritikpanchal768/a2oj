#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i <= b; i++)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    ll m;
    cin>>m;
    vi v;
    pi p;
    p.first=0;
    p.second=0;
    for(int i=1;i<=t;i++){
        ll x;
        cin>>x;
        // cout<<( ceil((double)x/m))<<" ";
        if( (x > m) && ((ceil((double)x/m))>=p.first)){
            p.second=i;
            p.first=ceil((double)x/m);
        }
    }
    if(p.second==0) cout<<t;
    else cout<<p.second;
    return 0;
}