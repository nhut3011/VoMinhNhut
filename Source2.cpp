#include <stdio.h>
#include <math.h>


int isPerfectSquare(int num) {
	int sqrtNum = sqrt(num);
	return (sqrtNum * sqrtNum == num);
}


void countAndPrintPerfectSquares(int n) {
	printf("Cac so chinh phuong nho hon %d la:\n", n);

	
	for (int i = 1; i < n; i++) {
		if (isPerfectSquare(i)) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main() {
	int n;
	printf("Nhap vao so nguyen duong n: ");
	scanf("%d", &n);

	
	countAndPrintPerfectSquares(n);

	return 0;
}
