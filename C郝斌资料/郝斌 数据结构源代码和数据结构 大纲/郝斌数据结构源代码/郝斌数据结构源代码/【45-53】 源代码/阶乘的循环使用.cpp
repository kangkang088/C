# include <stdio.h>

int main(void)
{
	int val;
	int i, mult=1;

	printf("������һ������: ");
	printf("val = ");
	scanf("%d", &val);

	for (i=1; i<=val; ++i)
		mult = mult * i;
	
	printf("%d�Ľ׳��ǣ�%d\n", val, mult);


	return 0;
}