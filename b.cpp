#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n);
	while(1)
	{
		printf("%d ", n);
		if(n==1)
			break;
		if(n%2==1)
			n=3*n+1;
		else
			n=n/2;
	}
	puts("");
	return 0;
}
