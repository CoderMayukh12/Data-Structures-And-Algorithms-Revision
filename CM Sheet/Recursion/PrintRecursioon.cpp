#include <bits/stdc++.h>
using namespace std;
void Recursive(int i,int n){
  //Base Case:
  if(i>n)return;
  cout<<"I love Recursion"<<endl;
  Recursive(i+1,n);
  return;
}
int main(){
    int n;
    cin>>n;
    Recursive(1,n);

}