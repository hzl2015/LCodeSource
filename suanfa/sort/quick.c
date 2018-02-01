#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int  Division(int *pnList, int nLeft, int nRight)
{
	int nBaseNum =  pnList[nLeft];

	while(nLeft < nRight)
	{
		while(nLeft < nRight && pnList[nRight] >= nBaseNum)
			nRight = nRight - 1;

		pnList[nLeft] = pnList[nRight];

		while(nLeft < nRight && pnList[nLeft] <= nBaseNum)
			nLeft = nLeft + 1;

		pnList[nRight] = pnList[nLeft];
	}

	pnList[nLeft] = nBaseNum;

	return nLeft;
}

void QuickSort(int *pnList, int nLeft, int nRight)
{
	if (nLeft < nRight)
	{
		int i = Division(pnList,nLeft,nRight);

		QuickSort(pnList, nLeft, i-1);

		QuickSort(pnList, i+1, nRight);
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

	QuickSort(nArray, 0, 9);

	for (i=0; i<10; i++)
	{
		printf("第%d个是值：%d\n",i+1,nArray[i]);
	}

	return 1;
}