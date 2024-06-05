# include <stdio.h>
# include <malloc.h>

struct BTNode
{
	char data;
	struct BTNode * pLchild; //p��ָ�� L����  child�Ǻ���
	struct BTNode * pRchild;
};

void PostTraverseBTree(struct BTNode * pT);
struct BTNode * CreateBTree(void);
void PreTraverseBTree(struct BTNode * pT);
void InTraverseBTree(struct BTNode * pT);

int main(void)
{
	struct BTNode * pT = CreateBTree();
	
//	PreTraverseBTree(pT);
//	InTraverseBTree(pT);
	PostTraverseBTree(pT);
	
	return 0;
}

void PostTraverseBTree(struct BTNode * pT)
{
	if (NULL != pT)
	{
		if (NULL != pT->pLchild)
		{
			PostTraverseBTree(pT->pLchild);
		}	
		if (NULL != pT->pRchild)
		{
				PostTraverseBTree(pT->pRchild);
			//pT->pLchild���Դ�������������
		}
		printf("%c\n", pT->data);
	}
}

void InTraverseBTree(struct BTNode * pT)
{
	if (NULL != pT)
	{
		if (NULL != pT->pLchild)
		{
			InTraverseBTree(pT->pLchild);
		}
		
		printf("%c\n", pT->data);
	
		if (NULL != pT->pRchild)
		{
				InTraverseBTree(pT->pRchild);
			//pT->pLchild���Դ�������������
		}	
	}
}

void PreTraverseBTree(struct BTNode * pT)
{
	if (NULL != pT)
	{
		printf("%c\n", pT->data);
	
		if (NULL != pT->pLchild)
		{
			PreTraverseBTree(pT->pLchild);
		}
		
		if (NULL != pT->pRchild)
		{
				PreTraverseBTree(pT->pRchild);
			//pT->pLchild���Դ�������������
		}	
	}	

/*
	α�㷨
	�ȷ��ʸ��ڵ�
	���������������
	���������������
*/
}

struct BTNode * CreateBTree(void)
{
	struct BTNode * pA = (struct BTNode *)malloc(sizeof(struct BTNode));
	struct BTNode * pB = (struct BTNode *)malloc(sizeof(struct BTNode));
	struct BTNode * pC = (struct BTNode *)malloc(sizeof(struct BTNode));
	struct BTNode * pD = (struct BTNode *)malloc(sizeof(struct BTNode));
	struct BTNode * pE = (struct BTNode *)malloc(sizeof(struct BTNode));

	pA->data = 'A';
	pB->data = 'B';
	pC->data = 'C';
	pD->data = 'D';
	pE->data = 'E';

	pA->pLchild = pB;
	pA->pRchild = pC;
	pB->pLchild = pB->pRchild = NULL;
	pC->pLchild = pD;
	pC->pRchild = NULL;
	pD->pLchild = NULL;
	pD->pRchild = pE;
	pE->pLchild = pE->pRchild = NULL;

	return pA;
}