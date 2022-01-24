#include <stdio.h>

int main(void) {
	
	for (int j = 1; j <= 5; j++) {
	
		for (int i = 0; i <= 10; i++) {
		
			printf("%3d ", i * j);
		}
		printf("\n");
	}
}