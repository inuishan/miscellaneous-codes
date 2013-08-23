#include<stdio.h>

int delete(int value);
void treeTraversal();
typedef struct node{
 	int value;
	struct node *lc;
	struct node *rc;
} NODE;
static NODE * root;
int insert(int value, NODE *);
int main()
{	
	root==NULL;
	int choice;
	do{
	//printf("%s\n", "Menu");
	//printf("%s\n","1.insert\n2.delete\n3.treeTraversal\n9.quit");
	scanf("%d",&choice);
	int value;
	switch(choice)
		{
			case 1:
				
				scanf("%d",&value);
				NODE newNode;
				newNode.value = value;
				newNode.lc=NULL;
				newNode.rc=NULL;
				insert(value,&newNode); 
				printf("root's value is %d\n",root->value );
			//	printf("%s\n", "I m sexy & i kno itsdsds");
				break;
			case 2:
				//int value;
				//scanf("%d",&value)
				break;
			case 3:
				break;
			default:
				break; 
		}
	}while(choice!=5);
	return 0;
}
int insert(int value, NODE * newNode)
{
	if(root==NULL)
		{	
			printf("%s\n", "I m sexy & i kno itsdsds");
			// NODE temp;
			// temp.value=value;
			// temp.lc=NULL;
			// temp.rc=NULL;
			// root=&temp;
			root = newNode;
			printf("roots value %d\n",root->value);
		}
	else{
		printf("roots value %d\n",(root->value));
		printf("%s\n", "else block");
		// NODE newNode;
		// newNode.value=value;
		// newNode.lc=NULL;
		// newNode.rc=NULL;
		// NODE *parent;
		NODE *temp = root;
		while(1)
			{
			if(value<=(temp->value))     //enter left subtree
					{
						//parent=temp;
						if(temp->lc!=NULL) //if left child
							temp=temp->lc;
						else 
							{	
								printf(" temp value%d\n",temp->value);
								//printf("%d\n", );
								temp->lc=newNode;
								printf("lc value%d\n",temp->lc->value);
								printf(" temp value%d\n",temp->value);
								printf("roots value%d\n",root->value);
								printf("%s\n","Inside else block vldldk" );
								return 1;
							}
					}
			else{	
					//	parent=temp;
						if(temp->rc!=NULL) //if left child
							temp=temp->rc;
						else 
							{
								temp->rc=newNode;
								return 1;
							}					//enter right subtree

			}		

			}

	}
}
int delete(int value)
{

}
void treeTraversal()
{

}