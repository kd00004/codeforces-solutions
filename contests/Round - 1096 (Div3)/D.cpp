#include <bits/stdc++.h>
using namespace std;
#define int         long long
#define pb          push_back
#define ppi            pair<int,int>
#define all(x)      (x).begin(),(x).end()
#define ff          first
#define ss          second
const int N = 0;
 
 int mex(vector<int>& v){
 	sort(all(v));
  	int mx1 = v.size();
  	for(int i=0;i<(int)v.size();i++){
  		if(i != v[i]){
  			mx1 = i;
  			break;
  		}
  	}
  	return mx1;
 }
 
void solve(){
  int n;
  cin>>n;
  vector<int> a(2*n);
  int i1 = -1, i2=-1;
  for(int i=0;i<2*n;i++){
  	cin>>a[i];
  	if(i1 == -1 && a[i] == 0) i1 = i;
  	else if(a[i] == 0) i2=i;
  }
  //cout<<"=> "<<i1<<" "<<i2<<'\n';
  int ans = 0;
  vector<int> v;
  int cnt=0;
  	while(i1 + cnt < 2*n && i1 - cnt >= 0 && a[i1+cnt] == a[i1-cnt]){
  		v.push_back(a[i1 + cnt]);
  		cnt++;
  	}
  	
  	ans = max(ans, mex(v));
  	
  	cnt=0;
  	v.clear();
  	while(i2 + cnt < 2*n && i2 - cnt >= 0 && a[i2+cnt] == a[i2-cnt]){
  		v.push_back(a[i2 + cnt]);
  		cnt++;
  	}
  	
  	ans = max(ans, mex(v));
  	
  	v.clear();
  	
  	int idx1=i1-1, idx2=i2+1;
  	
  	while(i1 <= i2 && i1 < 2*n && i2 >=0 && a[i1] == a[i2]){
  		v.push_back(a[i1]);
  		i1++;
  		i2--;
  	}
  	if(i1 <= i2) v.clear();
  	while(i1 > i2 && idx1 >= 0 && idx2 < 2*n && a[idx1] == a[idx2]){
  		v.push_back(a[idx1]);
  		idx1--;
  		idx2++;
  	}
  	
  	ans = max(ans, mex(v));
  	
  	cout<<ans<<'\n';
  
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