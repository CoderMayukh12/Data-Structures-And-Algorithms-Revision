#include <bits/stdc++.h>
using namespace std;
#define int long long
string str="";
void Recursive(int n){
  //Base Case:
  if(n==0)return;
  str+=((n%2)+'0');
  Recursive(n/2);
  return;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         Recursive(n);
         reverse(str.begin(),str.end());
         (n!=0)?cout<<str<<endl:cout<<0<<endl;
         str="";
    }
    

}