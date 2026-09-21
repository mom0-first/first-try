#include <stdio.h>

void pyramid(int n)
{
	int i = 1;
	int a = 1;

	while (i <= n)
	{
		for (int j = a;j < n;j++)
           printf(" ");
		for (int j = 1;j <= i;j++)
			printf("%d ", i);
		printf("\n");
		a++;
		i++;
	}
}

int main()
{
	int n;

	scanf("%d", &n);
	pyramid(n);

	return 0;
}