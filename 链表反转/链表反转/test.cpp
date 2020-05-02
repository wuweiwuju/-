#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

typedef struct listnode {
	int data;
	listnode* next;
}listnode;

listnode* reverse(listnode* head)
{
	if (head->next == NULL || head->next->next == NULL)
	{
		return head;   /*����Ϊ�ջ�ֻ��һ��Ԫ����ֱ�ӷ���*/
	}

	listnode* t = NULL;
	listnode* p = head->next;
	listnode* q = head->next->next;
	while (q != NULL)
	{
		t = q->next;
		q->next = p;
		p = q;
		q = t;
	}

	/*��ʱqָ��ԭʼ�������һ��Ԫ�أ�Ҳ����ת�������ı�ͷԪ��*/
	head->next->next = NULL;  /*��������β*/
	head->next = p;           /*��������ͷ*/
	return head;
}

listnode* fill(listnode* head)
{
	listnode *p, *q;
	p = head;
	for (int i = 0; i < 10; i++)
	{
		q = (listnode*)malloc(sizeof(listnode));
		q->data = i + 1;
		q->next = NULL;
		p->next = q;
		p = q;
	}
	return head;
}

void print(listnode* head)
{
	listnode* p;
	p = head->next;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
int main()
{
	//��ʼ������ͷ�ڵ�
	listnode* head;
	head = (listnode*)malloc(sizeof(listnode));
	head->next = NULL;
	head->data = -1;
	listnode* linklist = fill(head);
	print(head);
	reverse(head);
	print(head);
	return 0;
}

