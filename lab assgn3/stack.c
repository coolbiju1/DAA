//Bijay Kumar Jena C2 21
//Stack

#include<stdio.h>
#include<stdbool.h>
#define max 5

bool isFull();
bool isEmpty();
void push(int);
int pop();
void display();

struct stk{
    int st[max];
    int top;
};
typedef struct stk stack;
stack s;

int main(){
    s.top--;
    printf("1.Push\n2.Pop\n3.Display\n4.Exit");
    int opt;
    while(1){
        printf("\nChoose:");
        scanf("%d",&opt);
        switch(opt){
            case 1: printf("Input: ");
                    int inp;
                    scanf("%d",&inp);
                    push(inp);
                    break;
            case 2: if(pop()>0){
                        printf("%d is deleted",pop());
                    }else{
                        printf("Empty!!");
                    }
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default:printf("Wrong Input!");
        }
    }
}

bool isFull(){
    if(s.top==max-1){
        printf("Overload!!");
        return true;
    }
    else return false;
}

bool isEmpty(){
    if(s.top==-1){
        printf("Empty!!");
        return true;
    }
    else return false;
}

void push(int a){
    if(isFull()){
        return;
    }else{
        s.top++;
        s.st[s.top]=a;
    }
}

int pop(){
    if(isEmpty()){
            return -1;
    }else{
        return s.st[s.top--];
    }
}

void display(){
    printf("Stack: ");
    for(int i=0;i<=s.top;i++){
        printf("%d ",s.st[i]);
    }
}
