 #include <bits/stdc++.h>
#define mp make_pair
#define ll long long
#define pii pair<int,int>
using namespace std;

bool cmp(pii p1,pii p2) {
    return p1.first<p2.first;
}
int main() {
  ll n;
  cin>>n;
  vector<pii>v;
  int a,b;
  int curr=0;
  for(int i=0;i<n;i++) {
      cin>>a>>b;
      v.push_back({b,a});
  }
  sort(v.begin(),v.end(),cmp);
  int st=1;
  for(int i=0;i<n;i++) {
      curr+=v[i].second;
      if(curr>v[i].first){
          st=0;
          break;
      }
  }
  if(st) {
      cout<<"Yes";
  }
  else {
      cout<<"No";
  }
}

