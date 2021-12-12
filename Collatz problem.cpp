#include<stdio.h>
int main(void) {
	int i = 1;
	int j = 0;
	while (i < 500) {
		j = i;
		while (j != 1) {
			if (j % 2 == 0) {
				j /= 2;
				printf("%5d", j);
			}
			else {
				j = j * 3 + 1;
				printf("%5d", j);
			}
		}
		i++;
		putchar('\n');
	}
	return 0;
}