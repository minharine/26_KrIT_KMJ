#include <stdio.h>

int main(void)
{
	// 1.산술 연산자
	printf("===산술 연산자=== \n");
	
	int a1 = 411, b1 = 111;
	printf("a + b = %d \n", a1 + b1);
	printf("a - b = %d \n", a1 - b1);
	printf("a * b = %d \n", a1 * b1);
	printf("a / b = %d \n", a1 / b1);
	printf("a %% b = %d \n", a1 % b1);
	printf("(double)a / b = %f \n\n", (double)a1 / b1);

	// 2.증감 연산자
	printf("===증감 연산자=== \n");
	
	int a2 = 5;
	int b2 = ++a2;
	printf("전위(++a)\n");
	printf("a = %d, b = %d\n\n", a2, b2);
	
	int a2_1 = 5;
	int b2_1 = a2_1++;
	printf("후위(a++)\n");
	printf("a = %d, b = %d\n\n", a2_1, b2_1);

	printf("%d    %d\n\n", b2_1++, ++b2_1);

	// 3.복합 대입 연산자
	printf("===복합 대입 연산자=== \n");
	
	int a3 = 10;
	printf("a += %d \n", a3 += 5);
	printf("a -= %d \n", a3 -= 3);
	printf("a *= %d \n", a3 *= 2);
	printf("a /= %d \n", a3 /= 4);
	printf("a %%= %d \n", a3 %= 3);

	printf("a의 결과 \n\n", a3);

	// 4.단항 연산자
	printf("===단항 연산자=== \n");
	
	int x = 9;
	int x1 = -x;
	int x2 = +x;
	int x3 = !x;
	int x4 = ~x;
	
	printf("-x = \n", x1);
	printf("+x = \n", x2);
	printf("!x = \n", x3);
	printf("~x = \n\n", x4);

	// 5.형 변환
	printf("===형 변환=== \n");
	
	double r1 = 5 / 2;
	double r2 = (double)5 / 2;
	
	printf("5 / 2 = %f\n", r1);
	printf("(double)5 / 2 = %f\n\n", r2);

	// 6.sizeof
	printf("===sizeof=== \n");
	
	sizeof(char);
	sizeof(short);
	sizeof(int);
	sizeof(long);
	sizeof(long long);
	sizeof(float);
	sizeof(double);
	sizeof('A');
	sizeof(char*);
	sizeof(short*);
	sizeof(int*);
	sizeof(long long*);
	sizeof(0x34 + 128);
	sizeof(3 + 2.5);

	
	printf("sizeof(char) => %zu\n", sizeof(char));
	printf("sizeof(short) => %zu\n", sizeof(short));
	printf("sizeof(int) => %zu\n", sizeof(int));
	printf("sizeof(long) => %zu\n", sizeof(long));
	printf("sizeof(long long) => %zu\n", sizeof(long long));
	printf("sizeof(float) => %zu\n", sizeof(float));
	printf("sizeof(double) => %zu\n", sizeof(double));
	
	printf("sizeof('A') => %zu\n", sizeof 'A');
	printf("sizeof(char*) => %zu\n", sizeof(char*));
	printf("sizeof(short*) => %zu\n", sizeof(short*));
	printf("sizeof(int*) => %zu\n", sizeof(int*));
	printf("sizeof(long long) => %zu\n", sizeof(long long*));
	
	printf("sizeof(0x34 + 128) => %zu\n", sizeof(0x34 + 128));
	printf("sizeof(3 + 2.5) => %zu\n\n", sizeof(3 + 2.5));
	
	// 7.삼항 조건 연산자
	printf("===삼항 조건 연산자=== \n");
	
	int a7 = 7;
	int a7_1 = 10, a7_2 = 20;
	double X = -3.5;

	
	printf("짝수 여부: %d\n", (a7 % 2 == 0) ? 1 : 0);

	int maxVal = (a7_1 > a7_2) ? a7_1 : a7_2;
	printf("더 큰 값: %d\n", maxVal);

	double result = (X > 0) ? 100.0 : -100.0;
	printf("결과 값: %.1f\n", result);

	return 0;
	
}