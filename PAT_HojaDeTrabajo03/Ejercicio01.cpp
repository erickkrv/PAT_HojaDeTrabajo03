#include "Ejercicio01.h"

void Ejercicio01::insertionsort(int nums[], int n)
{
	for(int i=1; i<n; i++)
	{
		int j=i;
		while(j>0 && nums[j-1]>nums[j])
		{
			int aux=nums[j];
			nums[j]=nums[j-1];
			nums[j-1]=aux;
			j--;
		}
	}
}
int Ejercicio01::findMin(int nums[], int n)
{
	insertionsort(nums, n);
    return nums[0];
}
