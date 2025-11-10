#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 5
int Q[SIZE];
int f=-1,r=-1;
void enqueue();
void dequeue();
void display();
void main() {
	int ch,ele,i;
	while(1){
		printf("1.Enqueue 2.Dequeue 3.Display 4. Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1: enqueue();
			break;
			case 2: dequeue();
			break;
			case 3: display();
			break;
			case 4: exit(1);
		}
	}
}
void enqueue()
{
	int ele;
	if((f==0)&&(r==SIZE-1)||(r==f-1)){
		printf("overflow\n");
	}
	else {
		printf("enter element:");
	scanf("%d",&ele);
	if(f==-1){
		f++;
		r++;
	}
	else if(f!=0&& r==SIZE-1){
		r=0;
	}
	else{
		r++;
	}
	Q[r]=ele;
	}
	}
void dequeue()
{
	if((f==-1)){
		printf("Underflow\n");
	}
	else{
		if (f==SIZE-1&&r<f){
			f=0;
		}
		else if(f==r){
			f=-1;
			r=-1;
		}
		else{
			f++;
		}
	}
	}
void display(){
	int i;
	if(f==-1||r==-1){
		printf("Underflow\n");
	}
	else{
		if(f<r){
			for(i=0;i<=r;i++){
				printf("%d ",Q[i]);
			}
		}
		else {
			for (i=f;i<SIZE;i++){
				printf("%d",Q[i]);
				for (i=0;i<=r;i++){
					printf("%d ",Q[i]);
				}
			}
		}
	}
}		
