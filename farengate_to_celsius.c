#include <stdio.h>

int centigrade;
int lower = 0, upper = 300, step = 20;

int main() {
	int fahr = lower;
	while (fahr <= upper) {
		centigrade = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, centigrade);
		fahr = fahr + step;
	}
}
