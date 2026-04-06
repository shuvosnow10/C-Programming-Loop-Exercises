//solve no.9
#include<stdio.h>

int main (){

int n,sum=0;

scanf("%d",&n);
for(int i=2;i<=2*n;i+=2){

sum+=i*i;


}
printf("%d",sum);



}