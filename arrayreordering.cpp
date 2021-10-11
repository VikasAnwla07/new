#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
      return b;
    if(b==0)
      return a;
    if(a>b)
      return(a-b,b);
    if(a<b)
      return(a,a-b);
}
int main()
{
    int t,n,a[1000000],i,m=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(i=0;i<n;i++)
          cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        m+=gcd(a[i],a[i+1]);
    }
    cout<<m;
    return 0;
}
