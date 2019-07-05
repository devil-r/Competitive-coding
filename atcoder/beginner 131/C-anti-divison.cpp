 #include <bits/stdc++.h>
#define mp make_pair
#define ll long long
using namespace std;


int main() {
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  ll k;
  ll x=(a-1)/c,y=(b)/c;
  k=y-x;
  //cout<<k<<endl;
  x=(a-1)/d,y=(b)/d;
  k+=y-x;
  //cout<<k<<endl;
  ll lcm=(c*d)/__gcd(c,d);
  x=(a-1)/lcm,y=(b)/lcm;
  k-=y-x;
  cout<<b-a+1-k;
}

