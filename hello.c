#include<iostream>
#include<cmath>
using namespace std;
               
int main(){
int t,n,a,i,j;
cin>>t;
while(t--){
    cin>>n>>a;
    int count=0;
    if(n/4==0){
        cout<<a<<endl;
    }else{
        for(i=n;i>=1;i--){
        j=n/4;
        int s=n%(i*i);
        if(s==0 && i!=1){
            count+=1;
            break;
        }
        }
    if(count==0){
        cout<<a*(j+1)<<endl;
    }else{
        cout<<i*a<<endl;
    }
    }
}
return 0;
}