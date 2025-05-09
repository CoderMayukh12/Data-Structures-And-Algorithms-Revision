#include<bits/stdc++.h>
using namespace std;
#define int long long 
int maximum(int a,int b){
         return (a>b)?a:b;
         
}
int solve(vector<int>arr,int low,int high){
         if(high==low)return arr[high]; 
         int mid=low+(high-low)/2;
         return maximum(solve(arr,low,mid),solve(arr,mid+1,high));
         
}
signed main(){
         int n;
         cin>>n;
         vector<int>arr(n);
         for(auto &x:arr)cin>>x;
         int ans=solve(arr,0LL,n-1);
         cout<<ans<<endl;
}