#include<stdio.h>
void main()
{
int i,n,j,k,a[2][2],b[2][2],c[2][4];
printf("enter the elements in rows and columns\n");
scanf("%d",&n);
printf("enter elements in the first matrix\n");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
printf("enter elements in the second matrix\n");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	scanf("%d",&b[i][j]);
	}
}
printf("addition of matrix\n");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	c[i][j]=a[i][j]+b[i][j];
	printf("%d\t",c[i][j]);
		
	}
	printf("\n");
}
}
