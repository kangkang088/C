# include <stdio.h>

int main(void)
{
	int a[5] = {1,2,3,4,5};

	//a[3] == *(3+a);

	printf("%p\n", a+1);
	printf("%p\n", a+2);
	printf("%d\n", *a+3); //*a+3�ȼ��� a[0]+3
	



	return 0;
}