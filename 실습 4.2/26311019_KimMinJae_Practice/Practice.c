#include <stdio.h>

void PracticeSum(void);
void PracticeNumberTable(void);

int main(void)
{
	//4-1 1부터 10000까지 홀수의 합
	
	int OddSum = 0;
	int n1 = 1, Max1 = 10000;
	for (; n1 <= Max1; n1 += 2)
	{
		OddSum += n1;
	}
	printf("1부터 10000까지 홀수의 합은 %d 입니다\n\n", OddSum);
	
	//4-2 1부터 10000까지 짝수의 합
	
	int EvenSum = 0;
	int n2 = 2, Max2 = 10000;
	for (; n2 <= Max2; n2 += 2)
	{
		EvenSum += n2;
	}
	printf("1부터 10000까지 짝수의 합은 %d 입니다\n\n", EvenSum);
	
	//4-3 1부터 10000까지 7의 배수의 합
	
	int Sum = 0;
	int n3 = 7, Max3 = 10000;
	for (; n3 <= Max3; n3 += 7)
	{
		Sum += n3;
	}
	printf("1부터 10000까지 7의 배수의 합은 %d 입니다\n\n", Sum);
	
	//4-3 2*2 ~ 9*9 구구단 출력
	
	printf("구구단\n");
	for (int table = 2; table <= 9; ++table)
	{
		printf("%d 단\n", table);
		for (int num = 2; num <= 9; ++num)
		{
			int multi = table * num;
			printf("%d x %d = %d\n", table, num, multi);
		}
		printf("\n");
	}

	return 0;
}
