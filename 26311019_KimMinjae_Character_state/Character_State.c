#include <stdio.h>

int main(void)
{
	float Knight_HP = 34.2f;
	float Knight_MP = 56.0f;
	float Knight_EXP = 23.1f;

	float Mage_HP = 53.1f;
	float Mage_MP = 10.3f;
	float Mage_EXP = 41.7f;

	float Priest_HP = 100.0f;
	float Priest_MP = 31.0f;
	float Priest_EXP = 42.0f;

	printf("================================\n");
	printf("\tCHARACTER STATUS\n");
	printf("================================\n");
	printf("Name: %s \n", "Knight");
	printf("HP: %.1f/100.0\n", Knight_HP);
	printf("MP: %.1f/100.0\n", Knight_MP);
	printf("EXP: %.1f/100.0\n\n", Knight_EXP);

	printf("Name: %s \n", "Mage");
	printf("HP: %.1f/100.0\n", Mage_HP);
	printf("MP: %.1f/100.0\n", Mage_MP);
	printf("EXP: %.1f/100.0\n\n", Mage_EXP);

	printf("Name: %s \n", "Knight");
	printf("HP: %.1f/100.0\n", Priest_HP);
	printf("MP: %.1f/100.0\n", Priest_MP);
	printf("EXP: %.1f/100.0\n", Priest_EXP);





	return 0;
}