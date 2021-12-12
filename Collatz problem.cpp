#include<stdio.h>
int main(void) {
	int i = 1;
	int j = 0;
	do {
		printf("n = %d	", i);
		j = i;
		while (j != 1) {
			if (j < i) {
				printf("「%d」", 1);
				break;
			}
			if (j % 2 == 0) {
				j /= 2;
				printf("「%d」", j);
			}
			else {
				j = j * 3 + 1;
				printf("「%d」", j);
			}
		}
		i++;
		putchar('\n');
	} while (i <= 5000);
	return 0;
}