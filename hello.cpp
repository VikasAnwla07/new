#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,n,i,j,k;
   cin>>t;
   int l=2*t;
   while(t--)
   { cin>>n;
      int p[n];
      deque<int> q;
     for(i=0;i<n;i++)
     {
         cin>>p[i];
         if(q.size()<0 || p[i]<q.front())
           q.push_front(p[i]);
         else 
           q.push_back(p[i]);  
     }
     /*while(k<n)
     {  
         if(p[k]<=q[i])
          q.insert(q.begin(),p[k]);
         else
          q.push_back(p[k]); 
         k++; 
     }*/
     while(q.size()!=0)
      { cout<<q.front()<<" ";
        q.pop_front();
      }  
     cout<<"\n";  
   }
    return 0;
}