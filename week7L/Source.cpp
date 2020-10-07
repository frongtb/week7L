#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void prime();
int main()
{
	prime();
	return 0;
}
void prime() {
	int check, x, y, a;
	printf("Prime number form 1 to :");
	scanf("%d", &a);
	for (x = 2; x <= a; x++)
	{
		check = 1;
		for (y = 2; y < x; y++) {
			if (!(x % y))
				check = 0;
		}
		if (check)
			printf("%d\t\t", x);
	}

}