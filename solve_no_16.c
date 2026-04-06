//solve no.16

#include<stdio.h>
int main (){

int n,fib1=0,fib2=1,temp;


scanf("%d",&n);

for(int i=2;i<=n;i++){

temp=fib1+fib2;
fib1=fib2;
fib2=temp;

}

printf("%d",fib2);


  return 0;
}