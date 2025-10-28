#include<stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int score = a / 10 * 2 + b / 10 * 3 + c / 10 * 5;
	printf("%d", score);
	return 0;
}