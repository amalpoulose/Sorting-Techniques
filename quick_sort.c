#include<stdio.h>
void quick_sort(int [],int,int);
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
	quick_sort(a,0,n-1);
	printf("Array elements after sort : ");
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\n");
	printf("----------------------------------------------------------------------------\n");
}

void quick_sort(int a[],int low,int high)
{
	int pivot=a[low],i,j,temp;
	i=low+1;                   //assign i as low +1
	j=high;                   //j as high
	if(low<high)              
	{
ABC:
		while(i<=high && pivot>a[i]) //find the i value till pivot become less than elements in the current partition 
			i++;
		while(pivot<a[j])           //find j value till pivot become higher than elements in the current partition
			j--;
		if(i<j)                // if the i and j values not crossed each other swap content at i and jth index and continue till i and j crossed each other 
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			goto ABC;           //jump to label named ABC to get new i and j value    
		}
		if(i>j)              //if i and j crossed each other swap pivot value with jth index value
		{
			a[low]=a[j];
			a[j]=pivot;
			quick_sort(a,low,j-1);   // create partition from low to j-1 index
			quick_sort(a,j+1,high); // create next partition from j+1 th index to high
		}
	}
}

