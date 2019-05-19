#include <iostream>
#include "SortFunction.h"
#include <cstdlib>   // for srand and rand
#include <ctime>     // for time
#include <chrono> 
using namespace std;
void main()
{
	srand(time(0));  
	int ArrayTest[100];
	for(int i=0;i<100;i++)
	{
		ArrayTest[i]=rand() % 100; 
	}
	for (int i=0;i<100;i++)
	{
		cout<<ArrayTest[i]<<"   ";
	}
	cout<<"jaidasd";
	system("pause");
	
}