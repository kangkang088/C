# include <stdio.h>

int main(void)
{
	int * p; //p�Ǹ���������, int * ��ʾ��p����ֻ�ܴ洢int���ͱ����ĵ�ַ
	int i = 10;
	int j;

//	p = &i;
	j = *p; // �ȼ��� j = i;
	printf("i = %d, j = %d, *p = %d\n", i, j, *p);
	 

	//p = 10;  //error
	

	return 0;
}