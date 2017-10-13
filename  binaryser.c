#include<stdio.h>
#define MAX 100
int binary_search(int a[], int num, int n)
{
 int mid,low,high=n-1;
 while(low<=high)
 {
	 mid=(low+high)/2;
	 if(a[mid]==num)
	 return mid;
	 else
	 {
		 if(num>a[mid])
		 low=mid+1;
		 else
		 high=mid-1;
	 }
 }
	 return-1;
}
int main()
{
	
	int a[MAX],n,e,i;
	printf("Enter the no of elements(max 100):\n");
	scanf("%d",&n);
	if(n<0||n>100)
	{
		printf("arry index out of bound");
		return 0;
	}
	printf("Enter the element of the array \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to be searched\n");
	scanf("%d",&e);
	if(binary_search(a,e,n)!=-1)
		printf("Element found at %d\n",binary_search(a,n,e));
	else
		printf("Element not found\n"); 
	return 0;
}

