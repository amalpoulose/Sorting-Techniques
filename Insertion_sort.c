#include<stdio.h>
void insertion(int[],int);
int main(void)
{
	int a[100],i,n;
	printf("\t\t\tQuick Sort\n\n");
	printf("----------------------------------------------------------------------------\n");
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Array elements : ");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	printf("----------------------------------------------------------------------------\n");
	printf("Array elements before sort : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("----------------------------------------------------------------------------\n");
	insertion(a,n);
	printf("Array elements after sort : ");
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");
	printf("----------------------------------------------------------------------------\n");
}

void insertion(int a[],int n)
{
  int i,j,key;
  for(i=1;i<n;i++)
 {
   key=a[i];
   for(j=i-1;(j>=0)&&key<a[j];j--)
   {  a[j+1]=a[j];
      a[j]=key;
   }
 }
}
