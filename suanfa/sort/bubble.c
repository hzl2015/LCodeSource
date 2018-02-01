#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int *p, int n)
{
	if (n == 0 || p == NULL)
		return;

	for (int i=0; i<n; i++)
	{
		for (int j=n-1; j>i; j--)
		{
			//由大到小
			if (p[j] > p[j-1])
			{
				int ntemp = p[j];
				p[j] = p[j-1];
				p[j-1] = ntemp;
			}
		}
	}
}
int main(int argc, char * argv[])
{
	int i;
	int nArray[10];

	srand(time(0));

	// struct timeval tpstart;
	// gettimeofday(&tpstart,Null);
	// srand(tpstart.tv_usec);

	for (i=0; i<10; i++)
	{
		//1~100
		nArray[i] = rand()%100 + 1;
	}

	BubbleSort(nArray, 10);

	for (i=0; i<10; i++)
	{
		printf("第%d个是值：%d\n",i+1,nArray[i]);
	}

	return 0;
} 