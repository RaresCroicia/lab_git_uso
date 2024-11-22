#include <stdio.h>

int dif(int a, int b) {
	return a - b;
}

int sum(int a, int b) {
	return a + b;
}

void print(int printable) {
	printf("%d\n", printable);
}

int main() {
	print(sum(1, 2));
	return 0;
}
