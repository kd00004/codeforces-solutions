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
  int n;
  cin>>n;
  string s;
  cin>>s;
  int cnt1=0, cnt2=0;
  for(int i=0;i<n;i++){
  	if(s[i] == '(') cnt1++;
  	else cnt2++;
  }
  if(cnt1 == cnt2) cout<<"Yes"<<'\n';
  else cout<<"No"<<'\n';
  
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