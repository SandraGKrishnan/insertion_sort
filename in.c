#include<stdio.h>

int sort(int *a)
{
int i,j,t;
for(i=1;i<7;i++)
{
for(j=i-1,t=a[i];j>0&&a[j]>t;j--)
{
a[j+1]=a[j];
}
a[j+1]=t;
}
return 0;
}

int main()
{
int a[7]={4,23,43,38,15,10,30},i;
sort(a);
printf("sorted array :\n");
for(i=0;i<7;i++)
{
printf("%d",a[i]);
printf("\n");
}
return 0;
}
