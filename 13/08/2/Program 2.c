#include<stdio.h>
void main()
{
int i,j;
int n;
scanf("%d",&n);
int size=(2*n)-1;
int a[size][size];
int start=0;int end=size-1;
while(n>0)
{
for(i=start;i<=end;i++)
{
for(j=start;j<=end;j++)
{
if(i==start||j==start||i==end||j==end)
a[i][j]=n;
}
}
start++;
end--;
n--;
}
for(i=0;i<size;i++)
{
for(j=0;j<size;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
}
