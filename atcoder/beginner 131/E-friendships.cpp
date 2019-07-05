 #include <bits/stdc++.h>
#define mp make_pair
#define ll long long
#define pii pair<int,int>
using namespace std;

bool cmp(pii p1,pii p2) {
    return p1.first<p2.first;
}
int main() {
 ll n,k;
 cin>>n>>k;
 ll r=(n*(n-1))/2-(n-1);
 if(k>r) {
     cout<<-1;
     return 0;
 }
 vector<pii>v;
 for(int i=1;i<=n-1;i++) {
     v.push_back({i,n});
 }
 for(int i=1;i<=n-2;i++) {
     for(int j=i+1;j<=n-1;j++) {
         if(r==k) {
             break;
         }
         v.push_back({i,j});
         r--;
         if(r==k) {
             break;
         }
     }
     if(r==k) {
         break;
     }
 }
cout<<v.size()<<endl;
for(int i=0;i<v.size();i++) {
    cout<<v[i].first<<" "<<v[i].second<<endl;
}
}

