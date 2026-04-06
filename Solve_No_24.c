//solve no.24
#include<stdio.h>

int main (){

int base,power,result=1;

scanf("%d %d",&base,&power);

for(int i=1;i<=power;i++){

  result*=base;
}


  printf("%d",result);



}