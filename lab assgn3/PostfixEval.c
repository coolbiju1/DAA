//Bijay Kumar Jena C2 21
//Infix to Postfix

#include<stdio.h>
#include<stdbool.h>
#define max 10

bool isFull();
bool isEmpty();
void push(int);
int pop();
void display();

struct stk{
    char st[max];
    int top;
};
typedef struct stk stack;
stack s;

int main(){
    s.top=-1;
    char str[20];
    int i=0;
    printf("Input string:");
    scanf("%s",str);
    while(i<strlen(str)){
        if(isdigit(str[i])){
            push(str[i]);
        }
        else
        {
            int val1 = pop()-48;
            int val2 = pop()-48;
            //printf("%d %d\n",val1,val2);
            switch(str[i])
            {
                case '+': push(val2+val1+48);
                        break;
                case '-': push(val2-val1+48);
                        break;
                case '*': push(val2*val1+48);
                        break;
                case '/': push(val2/val1+48);
                        break;
            }
        }
        i++;
    }
    printf("Ans: %d",pop()-48);
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
