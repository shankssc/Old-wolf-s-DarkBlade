#include<stdio.h>
main()
{
int a[10],i,j,mid,num,low,high,size,x;
printf("enter the size of array");
scanf("%d",&size);

printf("enter the array elements in ascending order :");
for(i=0;i<=size-1;i++)
{
scanf("%d",&a[i]);
}
printf("enter the no. to be search : ");
scanf("%d",&num);
x=Bsearch(a,num,low,high);
high=size-1;
if(x==0)
{
printf("no. is not found \n");
}
}
int Bsearch(int a[], int num, int low, int high)
{ 
int mid,x=0;
if(low<=high)
{
mid=(low+high)/2;
if(a[mid]==num)
{
x=1;
return(num);
}
else if(a[mid]>num)
{
Bsearch(a,num,low,mid-1);
x==1;
}
else if(a[mid]<num)
{
Bsearch(a,num,mid+1,high);
x==1;
}
}
else
{ 
if(x==0)
printf("elemnet not found\n");

}
}
