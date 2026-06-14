#include <bits/stdc++.h>
using namespace std;
#define int         long long
#define pb          push_back
#define ppi            pair<int,int>
#define all(x)      (x).begin(),(x).end()
#define ff          first
#define ss          second
const int N = 0;
 
void solve(){
  int x, y;
  cin>>x>>y;
  if(x % 2==1 && y%2==1) cout<<"No"<<'\n';
  else cout<<"Yes"<<'\n';
  
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}