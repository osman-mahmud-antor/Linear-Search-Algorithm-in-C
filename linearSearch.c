#include<stdio.h>

int main()
{
	int a[] = {-3,4,1,88,7,9};
	int searchItem = 88,i;
	// Runtime Complexity: O(N)
	//Space Complexity: O(1)
	
	for(i=0;i<6;i++)
	{
		if(a[i]==searchItem)
		{
			printf("Item found at index: %d\n",i);
			return 0;
		}
	}
	printf("Item not found\n");
	
	
}
