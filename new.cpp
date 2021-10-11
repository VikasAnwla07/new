#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc,i,n;
    cin>>tc;
    while(tc--){
       int alphabet[26]={0};
       int red=0;
       cin>>s;
       for(i=0;i<s.length();i++)
       {
         alphabet[s[i]-97]++;
       }
       for(i=0;i<26;i++)
       { if(alphabet[i]>=2)
          red+=1;
         if((alphabet[i]&1)==1)
           red+=(alphabet-1)/2;
         else
          red+=(alphabet-1)/2;  
       }
    }
}