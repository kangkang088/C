# include <stdio.h>
# include <string.h>

struct Student
{	
	int sid;
	char name[200];
	int age;
}; //�ֺŲ���ʡ

void f(struct Student * pst);
void g(struct Student st);
void g2(struct Student *pst);

int main(void)
{
	struct Student st;  //�Ѿ�Ϊst��������ڴ�

	f(&st);
	g2(&st);

	//printf("%d %s %d\n", st.sid, st.name, st.age);

	return 0;
}

//���ַ�ʽ���ڴ� ��ʱ�� ���Ƽ�
void g(struct Student st)
{
	printf("%d %s %d\n", st.sid, st.name, st.age);	
}

void g2(struct Student *pst)
{
	printf("%d %s %d\n", pst->sid, pst->name, pst->age);	
}

void f(struct Student * pst)
{
	(*pst).sid = 99;
	strcpy(pst->name, "zhangsan");
	pst->age = 22;
}