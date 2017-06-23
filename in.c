#include<stdio.h>

int sort(int *a,int size)
{
  int i,j,t;
  for(i=0;i<size;i++)
    {
      for(j=i-1,t=a[i];j>=0&&a[j]>t;j--)
	{
	  a[j+1]=a[j];
	}
      a[j+1]=t;
    }
  return 0;
}
int read(int *a)
{
  int size,i;
  printf("enter the size");
  scanf("%d",&size);
  printf("enter the elements:\n");
 for(i=0;i<size;i++)
   {
     scanf("%d",&a[i]);
   }
     return size;
   
}
int main()
{
  int a[100],i;
  int size=read(a);
  sort(a,size);
  printf("sorted array :\n");
  for(i=0;i<size;i++)
    {
      printf("%d",a[i]);
      printf("\n");
    }
  return 0;
}
