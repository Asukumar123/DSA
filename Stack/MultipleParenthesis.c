#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int isEmpty( struct stack *ptr){
    if( ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull( struct stack *ptr){
    if( ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("Stack overflow! %d\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        // printf("The val is %d\n",val);
    }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow!\n");
        return -1;
    }
    else{
       int val=ptr->arr[ptr->top];
       ptr->top--;
    return val;
    }
}
int match(char a,char b){
    if(a=='(' && b==')'){
        return 1;
    }
     if(a=='{' && b=='}'){
        return 1;
    }
     if(a=='<' && b=='>'){
        return 1;
    }
     if(a=='[' && b==']'){
        return 1;
    }
    return 0;
}

int Multipleparenthesismatch(char *exp){
    // intialized Stack
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
   sp->size=10;
   sp->top=-1;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
char pooped_char;


    for(int i=0; exp[i]!='\0';i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='<' || exp[i]=='['){
            push(sp,exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]=='>' || exp[i]==']'){
              if(isEmpty(sp)){
                return 0;
              }
          pooped_char= pop(sp);
          if(!match(pooped_char,exp[i]) ){
            return 0;
          }
        }
}

  if(isEmpty(sp)){
                return 1;
              }
           return 0;
        }

int main (){
     
  char * exp = "<ht<hh>{hh}";
 if(Multipleparenthesismatch(exp)){
        printf("The parenthesis is matching");
    }
    else{
        printf("The parenthesis is not matching");
    }
return 0;

}