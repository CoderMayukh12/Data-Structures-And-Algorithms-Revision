#include <bits/stdc++.h>
using namespace std;
int power(int a,int b){
    int response=1;
    while(b!=0){
        //Check Last Bit of 'b'--> 
        if(b&1==1)response=response*a;//Save Response in a of a 
        a=a*a;//Make A more Powerful
        b=(b>>1);//Shift B rightwards...

    }
    return response;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<power(a,b)<<endl;
    }
    return 0;
}
