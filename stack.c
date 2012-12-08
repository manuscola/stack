#include "stack.h"
#include<stdlib.h>

int stack_init(struct Stack* self)
{
	if(self == NULL)
	{
		return -1;
	}

	self->head = NULL;
	return 0;
}

int stack_empty(struct Stack* self)
{
	return self->head == NULL;
}

int stack_push(struct Stack* self,void *data)
{
	struct Stack_node* newnode = malloc(sizeof(struct Stack_node));
	if(newnode == NULL)
		return -1;
	else
	{
		newnode->data = data;
		newnode->next = self->head;
		self->head = newnode;
		return 0;
	}	

}

void* stack_pop(struct Stack* self)
{
	if(self->head == NULL)
		return NULL;
	void* data = self->head->data;
	struct Stack_node* next = self->head->next;
	free(self->head);
	self->head = next;

	return data;
}
