#include<stdio.h>
#include<conio.h>
void main()
 {
  int n1,m1,n2,m2,a[20][20],b[20][20],c[20][20],i,j,k;
  clrscr();
   printf("enter n1 \n");
   scanf("%d",&n1);
   printf("enter m1 \n");
   scanf("%d",&m1);
   printf("enter n2 \n");
   scanf("%d",&n2);
   printf("enter m2 \n");
   scanf("%d",&m2);
     if(n1!=m2)
      {
       printf("multipilcation is not possible \n");
      }
     else
      {
	printf("enter the elemnts of 1st matrix \n");
	 for(i=0;i<n1;i++)
	  {
	    for(j=0;j<m1;j++)
	   {
	     scanf("%d",&a[i][j]);
	   }
	  }
	printf("enter the elemnts of 2nd matrix \n");
	 for(i=0;i<n2;i++)
	  {
	    for(j=0;j<m2;j++)
	     {
	       scanf("%d",&b[i][j]);
	     }
	  }
       printf("the 1st matrix \n");
   for(i=0;i<n1;i++)
    {
     for(j=0;j<m1;j++)
      {
       printf("%d\t",a[i][j]);
      }
     printf("\n");
    }
   printf("the 2nd  matrix \n");
   for(i=0;i<n2;i++)
    {
     for(j=0;j<m2;j++)
      {
       printf("%d\t",b[i][j]);
      }
     printf("\n");
    }
       for(i=0;i<n1;i++)
	{
	 for(j=0;j<m2;j++)
	  {
	   c[i][j]=0;
	   for(k=0;k<m1;k++)
	     c[i][j]+=a[i][k]*b[k][j];
	  }
	 }
       }
      printf("the multiplication of matrix is \n");
       for(i=0;i<n1;i++)
	{
	 for(j=0;j<m2;j++)
	  {
	   printf("%d\t",c[i][j]);
	  }
	 printf("\n");
	}
  getch();
 }