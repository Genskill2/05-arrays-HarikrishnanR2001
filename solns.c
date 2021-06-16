/* Enter your solutions in this file */
#include <stdio.h>
/*max function*/
int max(int a[], int n)
{ 
  int ret=0;
  for(int i=0;i<n;++i)
   {   
        if(a[i]>ret)
        ret=a[i];
   }
    return ret;
}
/*min function*/
int min(int a[],int n)
  {
  int ret=a[0];
   for(int i=0;i<n;++i)
   {   
        if(a[i]<ret)
        ret=a[i];
   }
    return ret;
}
/*average function*/
float average( int a[],int n)
{ float average=0;
  for(int i=0;i<n;++i)
    average+=a[i];
    return average/n;
} 

/*mode function*/
int mode(int a[],int n)
{  
     int max=0;
  for(int i=0;i<n;++i)
   {   
        if(a[i]>max)
        max=a[i];
   }
   
     int min=a[0];
  for(int i=0;i<n;++i)
   {   
        if(a[i]<min)
        min=a[i];
   } 
   
    int c=max-min+1;
   
   int count[c];
   
   for(int i=0;i<c;++i)
   
   {
       int ctr=0;
       int x=min+i;
        for(int j=0;j<n;++j)
      {
        if(a[j]==x)
        ctr+=1;
      }
       count[i]=ctr;
   }
    
    int flag=0,m=0;
    
    for(int i=0;i<c;++i)
   {   
        if(count[i]>m)
        {m=count[i];
        flag=i;}
   }
  int ret=flag +min;
   
   return ret;
}  
 
/*factor function*/
int factors(int n,int a[])
{
   int flag=0; 
  while (n % 2 == 0)
    {
        a[flag]=2;
        n = n/2;
        flag+=1;
    }
    
   
     
      for (int i = 3; i <= sqrt(n); i = i + 2)
    {
      
        while (n % i == 0)
        {
            a[flag]=i;
            n = n/i;
            flag+=1;
            
        }
    }
     if(n>2)
     {
         flag+=1;
         a[flag-1]=n;
     }
   
   
    
        
        
      return flag;
    
}
     
