#include<stdio.h>
int largestelement(int arr[],int size)
{
	int largest=arr[0];
	for(int i=1;i<size;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	return largest;
}
int main()
{
	int
	arr[]={12,45,7,23,56,89,34};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("largest element in the array is %d\n",largestelement(arr,size));
	return 0;
}
