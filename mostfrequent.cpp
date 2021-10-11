#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{ int n,i,l=0,h=n-1,c;
  unordered_map<int,int> m;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
    {cin>>a[i];
    m[a[i]]=0;
    }
    sort(a,a+n);
  for(i=0;i<n;i++)
  {
     m[a[i]]++;
  }
  i=0;
  while(n!=0)
  {
     cout<<n<<"\n";
     n-=m[a[i]];
     i+=m[a[i]];
  }

   return 0;
}