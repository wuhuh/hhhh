#include<stdio.h>
#include<string.h>
int a[10];
void q(long long int x, long long int y, int* a) {
	int i = 1,sy;
	a[0] = x % 10;
	while (i <= 9) {
		a[i] = a[i - 1] * a[0] % 10;
		if (a[i]==a[0]) { sy = i++; break; }
		i++;
	}
	printf("%d\n", a[(y-1)% sy]);
}
int main(void) {
	long long int x, y;
	while (scanf("%lld %lld", &x, &y) != EOF) {
		if (y == 0) printf("1\n");
		else q(x, y, a);
	}
}