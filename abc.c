#include<stdio.h>

int main(){


int i,j,L,R,temp=0;
int A=0,B=7;
int a[8]={9,12,3,17,16,28,37,44};


while(A!=7)
{
   i++;
}
while(B!=0)
{
if((L%2==0)&&(R%2!=0))
{
temp=a[A];
a[B]=temp;
j--;
a[B]=a[A];
}

printf("%d ",a[B]);
}
}
