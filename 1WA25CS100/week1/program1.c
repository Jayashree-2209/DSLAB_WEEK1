#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
#include&lt;stdlib.h&gt;

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

void main()
{
int value, choice;

while(1){
printf(&quot;\n\n***** MENU *****\n&quot;);
printf(&quot;1. Push\n2. Pop\n3. Display\n4. Exit&quot;);
printf(&quot;\nEnter your choice: &quot;);
scanf(&quot;%d&quot;,&amp;choice);
switch(choice){
case 1: printf(&quot;Enter the value to be insert: &quot;);
scanf(&quot;%d&quot;,&amp;value);
push(value);

break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);
default: printf(&quot;\nWrong selection!!! Try again!!!&quot;);
}
}
}

void push(int value){
if(top == SIZE-1)
printf(&quot;\nStack is Full!!! Insertion is not possible!!!&quot;);
else{
top++;
stack[top] = value;
printf(&quot;\nInsertion success!!!&quot;);
}
}

void pop(){
if(top == -1)
printf(&quot;\nStack is Empty!!! Deletion is not possible!!!&quot;);
else{
printf(&quot;\nDeleted : %d&quot;, stack[top]);
top--;
}
}

void display(){

if(top == -1)
printf(&quot;\nStack is Empty!!!&quot;);
else{
int i;
printf(&quot;\nStack elements are:\n&quot;);
for(i=top; i&gt;=0; i--)
printf(&quot;%d\n&quot;,stack[i]);
}
