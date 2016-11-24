// Binary_Search.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int * Sort(int data[])
{
	
	for(int j = 0; j<5;j++)
	{
		for(int i = j+1;i<5;i++)
		{
			if(data[j] > data[i])
			{
				int temp;
				temp = data[j];
				data[j] = data[i];				
				data[i] = temp;
			}
		}
	}


	return &data[0];
}


int _tmain(int argc, _TCHAR* argv[])
{
	int Numbers[5] = {30,40,20,60,10};
	int SortedArr[5];
	int * pSorted =  Sort(Numbers);
	int count = 0;
	while(count < 5)
	{
		SortedArr[count] = *pSorted;
		pSorted++;
		count++;
	}

	for(int i =0;i<count;i++)
	{
		std::cout<<SortedArr[i] << " ";
	}


	int k;
	std::cin>>k;
	return 0;
}

