#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InsertSort(int *npList,int nLength)
{
	for (int i=1; i<nLength; i++)
	{
		int nTemp = npList[i];
		int j;

		for (j=i-1; j>=0&&npList[j]>nTemp; j--)
		{
			npList[j+1] = npList[j];
		}

		npList[j + 1] = nTemp;
	}
}

int main(int argc, char* argv[])
{
	int i;
	int nArray[10];

	srand(time(0));

	for (int i=0; i<10; i++)
	{
		nArray[i] = rand()%100 + 1; 
	}

	InsertSort(nArray,10);

	for (i=0; i<10; i++)
	{
		printf("第%d个是值：%d\n",i+1,nArray[i]);
	}

	return 1;
}