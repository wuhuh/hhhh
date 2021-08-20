#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	int k; int a; int x;
	while (scanf("%d", &k) != EOF) {
		for (a = 0; a < 65; a++) {
			if ((18 + k * a) % 65 == 0) {
				printf("%d\n", a); break;
			}

		}
		if (a == 65) printf("no\n");
	}
}