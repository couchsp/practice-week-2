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

	printf("������ �� ��(x,y): ");
	scanf_s("%d %d", &x, &y);

	printf("1-���ϱ�\n2-����\n3-���ϱ�\n4-������\n");
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