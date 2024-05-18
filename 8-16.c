#include<stdio.h>
int find_k(int n);
int main(void) {
	int n;
	scanf("%d", &n);
	printf("k = %d", find_k(n));
}
int find_k(int n) {
	int k;
	for (k = 0; k < 100; k++)
	{
		if (n > 4 * k + 2 && n < 4 * (k + 1) + 2) {
			if(n - 4 * k + 2 < 4 * (k + 1) + 2 - n)
				return k;
			if (n - 4 * k + 2 > 4 * (k + 1) + 2 - n)
				return k+1;
		}
	}
}