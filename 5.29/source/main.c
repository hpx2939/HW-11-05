#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j;
	printf("Enter two numbers: ");
	scanf_s("%d %d", &i, &j);
	printf("%d\n", L(i, j));
	
	system("pause");
	return 0;

}


int L(int i, int j){
	int a = 0;
	for (int k = i; k <= i*j; k++)
	{
		if (k%i == 0 && k%j == 0){ a = k; break; }
	}
	return a;
}


