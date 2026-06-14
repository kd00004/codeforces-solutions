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
  vector<int> a(n);
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }
  vector<int> mini(n);
  mini[n-1] = a[n-1];
  for(int i=n-2;i>=0;i--){
  	mini[i] = min(mini[i+1], a[i]);
  }
  int len = 1, maxlen = 1;
  for(int i=1;i<n;i++){
  	if(mini[i] == mini[i-1]) len++;
  	else{
  		maxlen = max(maxlen, len);
  		len=1;
  	}
  }
  maxlen = max(maxlen, len);
  int ans = 0;
  for(int i=0;i<n;i++){
  	ans += (a[i] - mini[i]);
  }
  cout<<ans+maxlen-1<<'\n';
  
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