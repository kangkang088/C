/*
	2008��3��26��16:31:56
	��ʽ����
*/

# include <iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *pNext;
}NODE, *PNODE;

class Queue
{
public:
	Queue()
	{
		this->pHead = this->pTail = new NODE;
		this->pHead->pNext = NULL;
	}
	
	void InQueue(int val)
	{
		PNODE pNew = new NODE;

		pNew->data = val;
		pNew->pNext = NULL;
		
		pTail->pNext = pNew; //��pNew�ҵ�����β�� 
		pTail = pNew; //ע����βָ������
	
		return;
	}

	bool Empty() const
	{
		if (this->pHead == pTail)
			return true;
		else
			return false;
	}

	int OutQueue()
	{
		if (Empty())
		{
			cout <<"����Ϊ�գ��޷�����!" << endl;
		}
		else
		{
			PNODE pTemp = pHead->pNext; //pHead����Ҫɾ���Ķ���Ԫ�أ�pHead->pNext��ָ���Ԫ�ز���Ҫɾ����Ԫ�أ�
			pHead->pNext = pTemp->pNext;
			int val = pTemp->data;

			delete pTemp;

			if (NULL == pHead->pNext) //�������Ϊ��
			{
				pTail = pHead; //βָ��Ҳָ�����õ�ͷ���
			}
			
			return val;
		}
	}

	//��������
	void Travers(void) const
	{
		PNODE pTemp = pHead->pNext;

		while (pTemp != NULL)
		{
			cout << pTemp->data << "  ";
			pTemp = pTemp->pNext;
		}
		cout << endl;
	}

	void Clear()
	{
		while (! this->Empty())
		{
			OutQueue();
		}
	}
	
	~Queue()
	{
		this->Clear(); 
		delete pHead;
	}

private:
	PNODE pHead, pTail; //pHeadָ�����õ�ͷ��� pHead->pNext����ָ�����Ԫ�أ� pTailָ���βԪ��
};

int main(void)
{
	Queue Q;

	for (int i=0; i<5; ++i)
		Q.InQueue(i+1);

	Q.Travers();

	Q.OutQueue();
	Q.OutQueue();

	Q.Travers();

	Q.Clear();
	Q.OutQueue();

	return 0;
}