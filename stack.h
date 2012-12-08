#ifndef __STACK_H__
#define __STACK_H__

typedef struct Stack_node
{
	void *data;
	struct Stack_node* next;
}Stack_node;

typedef struct Stack
{
	struct Stack_node* head;
}Stack;

int stack_init(struct Stack* self);
int stack_empty(struct Stack* self);
int stack_push(struct Stack* self,void *data);
void* stack_pop(struct Stack* self);

#endif
