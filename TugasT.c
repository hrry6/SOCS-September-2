#include <stdio.h>

int main()
{
	int a[5],b[5],c[5],d[5];
	char matkul[5][20];
	
	for(int i = 0;i < 5; i++)
	{
		scanf("%s %d:%d-%d:%d", matkul[i], &a[i], &b[i], &c[i], &d[i]);
		--a[i];
		--c[i];
	}
	
	for(int i = 0;i < 5; i++)
	{
		printf("%s %02d:%02d-%02d:%02d\n", matkul[i], a[i], b[i], c[i], d[i]);
	}
	
	return 0;
}
