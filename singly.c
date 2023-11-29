#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
void main()
{
struct node*sp=(struct node*)0;//empty stack
struct node*push(struct node*,int);
struct node*pop(struct node*,int*);
int search(struct node*,int);
int option,item,ans;
do
{
printf("\n1.PUSH\n");
printf("\n2.POP\n");
printf("\n3.SEARCH\n");
printf("\n4.EXIT\n");
printf("\nOPTION:");
scanf("%d",&option);
switch(option)
{
case 1:printf("data:");
       scanf("%d",&item);
       sp=push(sp,item);
       break;
case 2:if(sp==(struct node*)0)
       printf("empty stack");
       else
       {
       (sp=pop(sp,&item));
       printf("poped item=%d",item);
       }
       break;
case 3:printf("data:");
       scanf("%d",&item);
       ans=search(sp,item);
       if(ans!=0)
       printf("found item");
       else
       printf("not found\n");
       break;
case 4:exit(0);
}
}
while(1);
}
//function to push 
struct node*push(struct node*sp,int data)
{
struct node*t;
t=(struct node*)malloc(sizeof(struct node*));
t->data=data;
t->next=sp;
return t;
}
//function to pop
struct node*pop(struct node*sp,int *data)
{
struct node*t=sp;
if(sp!=(struct node*)0)
{
*data=sp->data;
sp=sp->next;
free(t);
}
return sp;
}
//fuction to search
int search(struct node*sp,int data)
{
while(sp!=(struct node*)0 && sp->data!=data) 
sp=sp->next;
if(sp==(struct node*)0)
return 0;
else
return 1;
}                          
