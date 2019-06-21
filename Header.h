#include<iostream>
using namespace std;

void insert_sort(int x[], int n)
{
	int i, j, p;
	for (i = 1;i < n; ++i)
	{
		p = x[i];
		j = i;
		while (j > 0 && p < x[j - 1]) 
		{
			x[j] = x[j - 1]; 
			--j;
		}
	x[j] = p;
	}
}


void quick_sort(int x[], int start, int end)
{

	if (start < end)
	{
		int p = start;
		int pivot = end - 1;
		for (int i = start; i < end - 1; ++i)
		{
			if (x[i] < x[pivot]) { swap(x[i], x[p]); ++p; }
		}
		swap(x[p], x[pivot]);
		int k = p;
		quick_sort(x, start, p - 1);
		quick_sort(x, p + 1, end);
	}


}


#pragma once


#pragma once
