#include<stdio.h>
#include<stdlib.h>
#define max 100

int stack[max];
int  top=-1;

 void push(){
	int val;
	if(top==max-1){
		printf("Stack is full");
	}
	else{
		printf("Enter element to be added in stack:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
 }
 
 void pop(){
	if(top==-1){
		printf("Stack is Empty");
	}
	else{
		printf("Deleted element is %d",stack[top]);
		top=top-1;
	}
 }
 
 void display(){
	int i;
	if(top==-1){
		printf("Stack is Empty");
	}
	else{
		for(i=top;i>=0;--i){
			printf("%d",stack[i]);
		}
	}
 }

 main(){
  int a;
	
   while(1){
   printf("Welcome to Stack Program.\n\n");
   printf("1.PUSH.\n");
   printf("2.POP.\n");
   printf("3.Display.\n");
   printf("4.Exit.\n\n");
   printf("Enter your choice:");
   scanf("%d.\n",&a);
	
   switch(a){
	case 1:
	   push();
	   break;
	case 2:
	   pop();
	   break;
	case 3:
	   display();
	   break;
	case 4:
	   exit(0);   
	default: 
	    printf("Entered wrong number\n");
	    break;
	}
  }
 }

