/*************************************************************************
	> File Name: stack.c
	> Author: 
	> Mail: 
	> Created Time: Sun 06 Sep 2015 08:02:18 PM EDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define MAXNUM 10
#define elemtype int

typedef struct{
            elemtype  stack[MAXNUM];
            int top;
}qstype;

void 
init(qstype *s)
{
    s->top = 0;
}

int 
pushstack(qstype *s, elemtype x)
{
    if(s->top > MAXNUM - 1)
         return 0;
    s->stack[(s->top)++] = x;
         return 1;
}

int 
popstack(qstype *s)
{
    if(s->top <= 0)
        return 0;
    else 
       return s->stack[--(s->top)];
}

elemtype 
getTopStack(qstype *s)
{
    if(s->top <= 0)
        return 0;
    else{
        printf("%d 222\n", s->top--);
        return s->stack[--(s->top)];
    }
}
elemtype 
notEmptyStack(qstype *s)
{
    if(s->top < 0)
        return 0;
       else 
        return 1;
}

int 
main(int argc, char **argv)
{ 
    int i;
    qstype *head =(qstype *) malloc(sizeof(qstype));
    init(head);
    for(i = 0; i < 10; i++){
        pushstack(head, i);
        printf("%d 111", head->stack[i]);
        printf("\n");
    }
    
    printf("%d top %d getopstack\n",(head->top), getTopStack(head));
    if(!notEmptyStack(head)) 
    {
        printf("not empty\n");   
    }else
        printf("empty\n");

}
