#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void HeapAdjust(int *npList, int nParent, int nLength)
{
	int nChild = nParent * 2 + 1;
	int nLargest = npList[nParent];

	while (nChild < nLength)
	{
		if (nChild+1 < nLength && npList[nChild] < npList[nChild+1])
			nChild++;

		if (npList[nChild] < nLargest)
			break;

		npList[nParent] = npList[nChild];

		nParent = nChild;
		nChild = nParent * 2 + 1;
	}

	npList[nParent] = nLargest; 
}


void HeapSort(int *npList, int nLength)
{
	for (int i=nLength/2-1; i>=0; i--)
	{
		HeapAdjust(npList,i,nLength);
	}

	for (int i=nLength-1; i>0; i--)
	{
		int nTemp = npList[0];
		npList[0] = npList[i];
		npList[i] = nTemp;
		HeapAdjust(npList,0,i);
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

	HeapSort(nArray,10);

	for (i=0; i<10; i++)
	{
		printf("第%d个是值：%d\n",i+1,nArray[i]);
	}

	return 1;
}