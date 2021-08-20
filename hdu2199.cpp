#include<stdio.h>
#include<math.h>
#define eps 1e-10
double f(double x) {
	return 8 * pow(x, 4) + 7 * pow(x, 3) + 2 * x * x + 3 * x + 6;
}
int main(void) {
	int N;
	scanf("%d", &N);
	double n, left, right, mid;
	while (N > 0) {
		N--;
		left = 0; right = 100;
		scanf("%lf", &n);
		if (n <= f(0) || n >= f(100)) printf("No solution!\n");
		else {
			while (right-left> eps) {
				mid = (left + right) / 2;
				if (f(mid) > n) right = mid;
				else left = mid;
			}
			printf("%.4lf\n", mid);
		}
	}
}