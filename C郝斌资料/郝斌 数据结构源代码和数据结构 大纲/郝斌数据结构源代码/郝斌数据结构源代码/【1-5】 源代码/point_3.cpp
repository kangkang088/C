# include <stdio.h>

void f(int * p) //���Ƕ�����һ�����ֽ���*p���β�, ���Ƕ�����һ���βΣ����β����ֽ���p,����������int *
{
	*p = 100; //
}

int main(void)
{
	int i = 9;

	f(&i);
	printf("i = %d\n", i);

	return 0;
}

