#include <stdio.h>
#include <stdlib.h>

/**
 * Дан массив из n различных положительных целых чисел a1,a2,…,an.
 * Требуется посчитать количество таких целых положительных чисел x, что в массиве присутствуют и x, и 2x. 
 */

int cmp(const void* first, const void* second) {
    int f = *((unsigned*)first);
    int s = *((unsigned*)second);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

int main(int argc, char* argv[]) {
    size_t n;
	scanf("%lu", &n);
	unsigned* a = malloc(n * sizeof(unsigned));
    
	for (size_t i = 0; i < n; i++) {
        scanf("%u", &a[i]);
	}
	
	qsort(a, n, sizeof(unsigned), cmp);
	
	
	size_t j = 1;
	unsigned counter = 0;
	for (int i = 0; (j < n) && (i < n); i++) {
		for (j; (j < n) && (2 * a[i] > a[j]); j++);
		if (2 * a[i] == a[j]) counter++;
	}
	printf("%u", counter);
	
    return EXIT_SUCCESS;
}