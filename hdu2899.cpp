#include<stdio.h>
#include<math.h>
#define eps 1e-10
double f(double x, double y) {
	return 6 * pow(x, 7) + 8 * pow(x, 6) + 7 * pow(x, 3) + 5 * x * x - y * x;
}
double f1(double x, double y) {
	return 42 * pow(x, 6) + 48 * pow(x, 5) + 21 * x * x + 10 * x - y;
}
int main(void) {
	int N; double n;
	double left, right, mid;
	scanf("%d", &N);
	while (N > 0) {
		scanf("%lf", &n);
		left = 0; right = 100;
		while (right - left > eps) {
			mid = (left + right) / 2;
			if (f1(mid, n) < 0) left = mid + eps;
			else right = mid - eps;
		}
		printf("%.4lf\n", f(mid, n));
		N--;
	}
}