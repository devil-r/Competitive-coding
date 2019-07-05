
 #include <bits/stdc++.h>
#define mp make_pair
#define ll long long
using namespace std;

int main() {
   ll t;
   cin>>t;
   while(t--) {
       int n;
       ll x;
       cin>>n;
        vector<ll>e1,e2,o1,o2;
        ll sum=0;
       for(int i=0;i<n;i++) {
           cin>>x;
           if(x%2==0) {
               e1.push_back(x);
           }
           else
           {
               o1.push_back(x);
           }
       }
       for(int i=0;i<n;i++) {
           cin>>x;
           
           if(x%2==0) {
               e2.push_back(x);
           }
           else
           {
               o2.push_back(x);
           }
       }
       vector<int>vv,ee;
       for(int i=0;i<max(e1.size(),e2.size());i++) {
           if(i<min(e1.size(),e2.size())){
           sum+=(e1[i]+e2[i])/2;}
           else {
               if(e1.size()>e2.size()){
               vv.push_back(e1[i]);}
               else{
                   vv.push_back(e2[i]);
               }
           }
       }
       
       for(int i=0;i<max(o1.size(),o2.size());i++) {
           if(i<min(o1.size(),o2.size())){
           sum+=(o1[i]+o2[i])/2;}
           else {
               if(o1.size()>o2.size()){
               ee.push_back(o1[i]);}
               else{
                   ee.push_back(o2[i]);
               }
           }
       }
       for(int i=0;i<ee.size();i++) {
           sum+=(vv[i]+ee[i])/2;
       }
       cout<<sum<<endl;
       
   }
    
}