#include <stdio.h>

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
