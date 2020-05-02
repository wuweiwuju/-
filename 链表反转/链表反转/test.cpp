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
		return head;   /*链表为空或只有一个元素则直接返回*/
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

	/*此时q指向原始链表最后一个元素，也是逆转后的链表的表头元素*/
	head->next->next = NULL;  /*设置链表尾*/
	head->next = p;           /*调整链表头*/
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
	//初始化链表头节点
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

