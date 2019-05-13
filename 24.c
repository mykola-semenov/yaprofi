#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	size_t cities_count, roads_count, city;
	scanf("%d %d", &cities_count, &roads_count);
	unsigned *cities = malloc(cities_count * sizeof(unsigned));
	memset(cities, 0, cities_count * sizeof(unsigned));
	
	for (size_t i = 0; i <= 2 * (roads_count - 1); ++i) {
		scanf("%d", &city);
		cities[city]++;
	}
	
	for (size_t i = 0; i < cities_count; ++i) {
		if (cities[i] > 2) {
			printf("NO");
			return EXIT_SUCCESS;
		}
	}
	
	printf("YES");
	return EXIT_SUCCESS;
}