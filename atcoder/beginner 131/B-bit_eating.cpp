 #include <bits/stdc++.h>
#define mp make_pair
#define ll long long
using namespace std;


int main() {
  ll n,l;
  cin>>n>>l;
  int s=0,min=INT_MAX,sum=0;;
  for(int i=1;i<=n;i++) {
      int k=l+i-1;
      if(min>abs(k)) {
          min=abs(k);
          if(k<0) {
              s=-1;
          }
      }
      sum+=k;
  }
  if(s==-1) {
      min=-min;
  }
  sum-=min;
  cout<<sum;
}

