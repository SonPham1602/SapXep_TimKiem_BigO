#include "SortFunction.h"
void swap(int&a, int&b)
{
	int temp = a;
	a = b;
	b = temp;

}
//Thuat toan 1 
//Bubble Sort
void BubbleSort(int a[],int n){
	for(int i=0;i<n-1;i++)
	{
		for (int j=i+1;j>n;j--)
		{
			if(a[j]<a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
}

//Thuat toan 2
//Insertion Sort
void InsertionSort(int a[],int n )
{
	int x, temp;
	for (int i=1;i<n;i++)
	{
		x=i-1;
		temp = a[i];
		while (x>=0 && a[x]>temp)
		{
			a[x+1]=a[x];
			x--;
		}
		a[x+1]=temp;
	}
}
//Thuat toan 3
//Selection sort
void SelectionSort(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		int x=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[x] > a[j])
			{
				x=j;
				swap(a[i],a[x]);
			}
		}
	}
}
//Thuat toan 4
//Merge sort
void Merge(int a[], int left,int mid, int right){
	int left1=left,right1=mid,left2=mid+1,right2=right;
	int index=left;
	int *b = new int[right-left+1];
	while (left1<=right1 && left2<right2)
	{
		if (a[left1]<a[left2])
		{
			b[index]=a[left1];
			index++;
			left1++;
		}
		else
		{
			b[index]  = a[left2];
			index++; 
			left2++;
		}
	}

	if(left2>right2)
	{
		while (left1<=right1)
		{
			b[index]=a[left1];
			index++;
			right1++;
		}
	}

	if (left1>right1)
	{
		while (left2<=right2)
		{
			b[index]=a[left2];
			index++;
			left2++;
		}
	}

	for(index=left; index<=right;index++)
	{
		a[index]=b[index];
	}
}
void MergeSort(int a[], int left,int right)
{
	if(left<right)
	{
		int mid = (left+right)/2;
		MergeSort(a,left,mid);
		MergeSort(a,mid,right);
		Merge(a,left,mid,right);
	}
}
//Thuat Toan 5
//Quick sort
void QuickSort(int a[],int left,int right)
{
	int i = left, j = right;
	int pivot = a[(left+right)/2];
	do 
	{
		while (a[i]<pivot && i<right)
		{
			i++;
		}
		while (a[j]>pivot && i>left)
		{
			j--;
		}
	} while (i<=j);
	if (left<j)
	{
		QuickSort(a,left,j);
	}
	if (i<right)
	{
		QuickSort(a,i,right);
	}
}