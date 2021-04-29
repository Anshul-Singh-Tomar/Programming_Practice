#include<bits/stdc++.h>
using namespace std;
  
int dectooctal(int n)
{
    int ans=0,x=1;
    while(x<=n)
      {
          x*=8;
      }
    x/=8;
    while(x>0)
      {
          int last=n/x;
          n-=x*last;
          x/=8;
          ans=ans*10+last;       
      } 
    return ans;  
}  
int main()
{
    int n;
    cin>>n;
    cout<<dectooctal(n);
    return 0;
}