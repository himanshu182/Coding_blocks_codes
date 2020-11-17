#include<iostream>
using namespace std;
int summax(int n)
{
    long int sum,a[20000000];
   for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    sum=a[0];
     for(int i=1;i<n;i++)
     {
         if(a[i]>sum)
         sum=a[i];
     }
     return sum;
}
int main() {
	long int n;
    cin>>n;
    cout<<summax(n);
return 0;
}