#include<iostream>
using namespace std;
#include <algorithm> 
int main() 
{
    int a[1000],n,tar,i,p=0;
    int *l,*r;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>tar;
    sort(a,a+n);

r=&a[n-1];
l=&a[0];
   while(p<=n/2)
    {
  if(l==r)
  exit(0);      
      if(*l+*r==tar) 
         {
         cout<<*l<<" and "<<*r<<endl;
         ++l;
         if(l==r)
         exit(0);
         --r;

         
         }
     else if(*l+*r>tar)
         {   
            --r;
         }
         else{
             ++l;
             }
++p;     
}
    return 0;
}