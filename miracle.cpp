#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,res,l;
   cin>>tc;
   while(tc--)
   { string s;
     string word[5000];
     cin>>s;
     int spaces=0,words=0,k=0,n,p=0,j=0;
     string newstring ="";
     for(i=0;i<s.length();i++)
     {   if(i==0)
         { if(s[0]!='.')
            k++;
           else
            spaces++;
         }    
         else
         { if(s[i]=='.')
              spaces++;
           if(s[i-1]=='.' && s[i]!='.')
           { k++;        
           }
         }
     }
     //cout<<"\n";
     if(k <= 1) 
     { cout<<s<<"\n";
         continue;
     }
     res=spaces%(k-1);
     n=(spaces/(k-1));
     //cout<<k;
     i=0;
     while(i!=s.length() && s[i]=='.')
       i++;
      while(i!=s.length())
      { if(s[i]=='.')
        { { while(i!=s.length() && s[i]=='.')
           i++;
           }
          if(i==s.length())
           break;
         for(j=0; j<n; j++)
          { newstring+='.';
          } 
         if(res!=0)
          { newstring+='.'; 
            res--;
          }
        }
        else
        { newstring+=s[i];
          i++;
        }  
        //cout<<newstring<<"\n";
      }
      cout<<newstring<<"\n";
   } 
    return 0;
}