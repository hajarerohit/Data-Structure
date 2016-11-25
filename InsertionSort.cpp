// InsertionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void InsertionSort(int Data[],int Length)
{
	for(int i = 1;i<Length-1;i++)
	{
			int k = i;
			while(k > 0)
			{
				if(Data[k] < Data[k-1] )
				{
					int temp;
					temp = Data[k];
					Data[k] = Data[k-1];
					Data[k-1] = temp;
					
				}
				k--;
			}
		}
	

	for(int k = 0;k < Length;k++)
	{
		std::cout<<Data[k]<<" ";
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int num[5] = {30,20,10,15,35};
	InsertionSort(num,5);
	int k = 0;
	std::cin>>k;
	return 0;
}

