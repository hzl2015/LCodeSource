#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

	return 1;
}