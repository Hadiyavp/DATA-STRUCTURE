#include<stdio.h>
void main ()
{
   void readarray(int[],int);
   void printarray(int[],int);
   void sortarray(int[],int);
   void mergearray(int[],int[],int[],int,int);
   int ar1[100],ar2[100],ar3[200],m,n;
   printf("number of elements of an array[1-100]");
   scanf("%d",&m);
   printf("enter elements of 1 array\n");
   readarray(ar1,m);
   printf("number of elements of 2 array");
   scanf("%d",&n);
   printf("Enter the elements of 2 array\n");
   
   readarray(ar2,n);  
   sortarray(ar1,m);
   sortarray (ar2,n);
   printarray(ar1,m);
   printarray(ar2,n);   
   mergearray(ar1,ar2,ar3,m,n);
   printf("\nmerged array\n");
   printarray(ar3,m+n);
}
 
   void readarray(int x[],int n)
   {
      int i;
      for (i=0;i<n;i++)
      scanf("%d",&x[i]);
   }
    void printarray(int x[],int n)
    { 
      int i;
      for(i=0;i<n;i++)
      printf("%d  ",x[i]);
    }
    void sortarray(int a[],int n)
    {
     int i,j,temp;
     for(i=0;i<n-1;i++)
     for(j=i+1;j<n;j++)
     if(a[i]>a[j])
    {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }
}
      void mergearray(int ar1[],int ar2[],int ar3[],int m,int n)
      {
       int i,j,k;
       i=j=k=0;
       while(i<m&&j<n)
       if(ar1[i]<ar2[j])
          ar3[k++]=ar1[i++];
       else
          ar3[k++]=ar2[j++];
       while(i<m)
          ar3[k++]=ar1[i++];
       while(j<n)
         ar3[k++]=ar2[j++];
         return;
}                  

       
           
      
   
   
   
