/*
	2009��8��26��14:18:02
	���ʹ�ýṹ��
			���ַ�ʽ:
				struct Student st = {1000, "zhangsan", 20};
				struct Student * pst = &st;
				
				1.
					st.sid
				2. 
					pst->sid
					pst��ָ��Ľṹ������е�sid�����Ա		

*/

# include <stdio.h>
# include <string.h>

struct Student
{	
	int sid;
	char name[200];
	int age;
}; //�ֺŲ���ʡ

int main(void)
{
	struct Student st = {1000, "zhangsan", 20};
	//st.sid = 99;  //��һ�ַ�ʽ

	struct Student * pst;
	pst = &st;
	pst->sid = 99;  //�ڶ��ַ�ʽ  pst->sid �ȼ��� (*pst).sid  ��(*pst).sid�ȼ��� st.sid,  ����pst->sid �ȼ��� st.sid

	return 0;
}