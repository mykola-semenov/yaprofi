#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ask(int a, int b) {
	printf("? %d ", b - a);
	for (int i = a; i < b; ++i) {
		printf(" %d", i);
	}
	printf("\n");
	fflush(stdout);
}

int main() {
	int a, b, c;
	char mesg[10];
	scanf("%d", &c);
	a = 1;
	c += 1;
	
	while (a + 1 < c) {
		b = (a + c) / 2;

		ask(a, b);
		scanf("%s", mesg);
		
		if (strcmp(mesg, "Odd") == 0) {
			c = b;
		} else {
			a = b;
		}
	}
	printf("! %d\n", a);
	fflush(stdout);
	return EXIT_SUCCESS;
}