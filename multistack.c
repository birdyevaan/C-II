#include<stdio.h>
int A[100];
int topA=-1;
int topB;
int t;
int n;
void popA()
{
if(topA<0)
{
printf("STACK IS EMPTY");
}
else
topA--;
}
void popB()
{
if(topB==n)
{
printf("STACK IS EMPTY");
}
else
topB++;
}
void pushA()
{
if(topA==topB-1)
printf("\nSTACK OVERFLOW");
else
{
topA++;
scanf("%d",&t);
A[topA]=t;
}
}
void pushB()
{
if(topB-1==topA)
printf("\nSTACK OVERFLOW");
else
topB--;
scanf("%d",&t);
A[topB]=t;
}
void displayA()
{
for(int i=topA;i>=0;i--)
printf("\n%d   ",A[i]);
printf("\n");
}
void displayB()
{
for(int i=topB;i<n;i++)
printf("\n%d   ",A[i]);
printf("\n");
}
void main()
{
int u;
int p=0;
printf("ENTER SIZE OF ARRAY");
scanf("%d",&n);
topB=n;
do
{
printf("\n1:POP A\n2:PUSH A\n3.POP B\n4.PUSH B\n5:DISPLAY A\n6:DISPLAY B\n7.EXIT");
scanf("%d",&u);
if(u==1)
popA();
else if(u==2)
pushA();
else if(u==3)
popB();
else if(u==4)
pushB();
else if(u==5)
displayA();
else if(u==6)
displayB();
else if(u==7)
{
p++;
}
}
while(p==0);
}
