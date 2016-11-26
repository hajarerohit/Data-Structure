// Selection Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
template<typename t>
void Selection_Sort(t Data[],t Length)
{
	t min = 0;
	for(t j = 0;j<Length;j++)
	{
		min = Data[j];
		for(t i = j+1;i<Length;i++)
		{
			if(min > Data[i])
			{
				t temp;
				temp = Data[j];
				Data[j] = Data[i];
				Data[i] = temp;
				min = Data[j];
			}
		}
	}
	std::cout<<"After Sorting  : "<<std::endl;
	for(t k =0;k<Length;k++)
	{
		std::cout<<Data[k] << " ";
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int Numebers[5] = {30,10,40,50,20};
	Selection_Sort(Numebers,5);
	int i;
	std::cin>>i;
	return 0;
}

