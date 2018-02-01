#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void SeltctionSort(int *pnList, int nLength)
{
	if (pnList==NULL)
	{
		return;
	}

	for (int i=0; i<nLength; i++)
	{
		int nIndex = i;

		for (int j=i+1; j<nLength; j++)
		{
			if (pnList[nIndex] > pnList[j])
			{
				nIndex = j;
			}
		}

		int nTemp = pnList[i];
		pnList[i] = pnList[nIndex];
		pnList[nIndex] = nTemp;
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

	SeltctionSort(nArray, 10);

	for (i=0; i<10; i++)
	{
		printf("第%d个是值：%d\n",i+1,nArray[i]);
	}

	return 1;
}