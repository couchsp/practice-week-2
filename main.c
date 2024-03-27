#include <stdio.h>

int minus(int x, int y) {
	return x - y;
}

int plus(int x, int y) {
	return x + y;
}

double divide(int x, int y) {
	return (double)x / y;
}

int multiply(int x, int y) {
	return x * y;
}

int main() {
	int x, y, op;

	printf("연산할 두 수(x,y): ");
	scanf_s("%d %d", &x, &y);

	printf("1-더하기\n2-빼기\n3-곱하기\n4-나누기\n");
	scanf_s("%d", &op);

	switch (op) {
		case 1:
			printf("%d", plus(x, y));
		case 2:
			printf("%d", minus(x, y));
		case 3:
			printf("%d", multiply(x, y));
		case 4:
			printf("%lf", divide(x, y));
	}
	
		
}