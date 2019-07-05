
 #include <bits/stdc++.h>
#define mp make_pair
#define ll long long
using namespace std;

int main() {
   ll t;
   cin>>t;
   while(t--) {
       ll x,y,k;
       cin>>x>>y>>k;
       ll h=(x+y)/k;
       if(h%2) {
           cout<<"Paja"<<endl;
       }
       else
       {
           cout<<"Chef"<<endl;
       }
   }
    
}