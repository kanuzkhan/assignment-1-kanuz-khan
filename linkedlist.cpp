#include "linkedlist.h"
list :: list()
{
	head = NULL;
	tail = NULL;
}

void list :: createnode(double a)
{
	node *temp = new node;
	temp->value = a;
	temp->next = NULL;
	if (head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}

void list :: display_list()
{
	node *temp = new node;
	temp = head;
	cout << temp->value << "\t";
	while (temp->next != NULL)
	{
		temp = temp->next;
		cout << temp->value << "\t";
	}
}

void list :: delete_first() 
{
	node *temp = new node;
	temp = head;
	head = head->next;
	delete temp;
}

void list :: delete_last()
{
	node *temp = new node;
	temp = head;
	while (temp->next != tail)
	{
		temp = temp->next;
	}
	temp = tail;
	temp = temp->next;
	delete temp;
	tail->next = NULL;
}

void list :: insert_start(double a)
{
	node *temp = new node;
	temp->value = a;
	temp->next = head;
	head = temp;
}

void list :: insert_last(double a)
{
	node *temp = new node;
	tail->next = temp;
	temp->value = a;
	temp->next = NULL;
}

void list :: delete_position(int pos)
{
	node *temp1 = new node;
	node *temp2 = new node;

	temp2 = head;
	for (int i = 1; i < pos; i++)
	{
		temp1 = temp2;
		temp2 = temp2->next;
		if (temp2 == tail)
			break;
	}
	temp1->next = temp2->next;
	delete temp2;
}

void list::insert_position(int pos, double a)
{
		node * temp = new node;
		temp->value = a;
		temp->next = NULL;

		if (pos == 1)
		{
			temp->next = head;
			head = temp;
		}
		node * temp2 = head;
		for (int i = 1; i < pos - 1; i++)
		{
			temp2 = temp2->next;
			if (temp2 == tail)
			{
				tail->next = temp;
				break;
			}
		}
		if (temp2 == tail)
		{
			tail->next = temp;
		}
		else
		{
			temp->next = temp2->next;
			temp2->next = temp;
		}
}
