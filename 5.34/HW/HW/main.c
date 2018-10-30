#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j;
	printf("Enter base and exponent: ");
	scanf_s("%d %d", &i, &j);
	printf("%d\n", x(i, j));
	system("pause");
	return 0;
}
int x(int i, int j){
	int y = 1;
	if (i != 0 && j>=1){
		for (int k = 1; k <= j; k++){
			y = y*i;
		}
		return y;
	}
	else return 0;
}