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
