#include<stdio.h>
typedef struct node
{
	int value;
	node *next;
	/* data */
} NODE;
NODE head;
NODE *Head;
int main(int argc, char const *argv[])
{
	/* code */
	extern NODE *Head;
	NODE newNode;
	Head=NULL;
	int value;
	while(1)
	{
		scanf("%d",&value);

		insert(value);
	}

	return 0;
}