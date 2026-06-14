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
  vector<int> a(n), div6, div2, div3, rem;
  for(int i=0;i<n;i++){
  	cin>>a[i];
  	if(a[i] % 6 == 0) div6.push_back(a[i]);
  	else if(a[i] % 2 == 0) div2.push_back(a[i]);
  	else if(a[i] % 3 == 0) div3.push_back(a[i]);
  	else rem.push_back(a[i]);
  }
  for(int i=0;i<(int)div6.size();i++){
  	cout<<div6[i]<<" ";
  }
  for(int i=0;i<(int)div2.size();i++){
  	cout<<div2[i]<<" ";
  }
  for(int i=0;i<(int)rem.size();i++){
  	cout<<rem[i]<<" ";
  }
  for(int i=0;i<(int)div3.size();i++){
  	cout<<div3[i]<<" ";
  }
  
  cout<<'\n';
  
  
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