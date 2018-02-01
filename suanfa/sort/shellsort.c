#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ShellSort(int *npList,int nLength)
{
	int nStep = nLength / 2;

	while(nStep >= 1)
	{
		for (int i=nStep; i<nLength; i++)
		{
			int nTemp = npList[i];
			int j;

			for (j=i-nStep; j>=0&&npList[j]>nTemp; j=j-nStep)
			{
				npList[j+nStep] = npList[j];
			}

			npList[j+nStep] = nTemp;
		}
		nStep = nStep /2;
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

	for (i=0; i<10; i++)
	{
		printf("第%d个是值：%d\n",i+1,nArray[i]);
	}

	ShellSort(nArray,10);

	for (i=0; i<10; i++)
	{
		printf("第%d个是值：%d\n",i+1,nArray[i]);
	}

	return 1;
}