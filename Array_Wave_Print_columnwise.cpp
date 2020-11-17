#include<iostream>
using namespace std;
int main() 
{
int m=0,n=0,i,j;
int a[10][10];
  cin>>m>>n;
  for(i=0;i<m;i++)   
      {
             for(j=0;j<n;j++)
              {
             cin>>a[i][j];
              }       
     }  
            j = 0;
          i = 0;
 while( j < n)
        {
		 if(i==0)
          {    
			for(i=0;i<m;i++)
               {
	             cout<<a[i][j]<<", ";
               }
			   i=m-1;
			   ++j;
     	  }	   
       else if(i==m-1)
	      {
	      for(i=m-1;i>=0;i--)
     		    {
			      cout<<a[i][j]<<", ";
	    	    }
				i=0;
				++j;
    	  }
     }
	    cout<<"END";
        return 0;
}