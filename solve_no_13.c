//solve no.13

#include<stdio.h>

int main (){

float n,sum=0;

scanf("%f",&n);
for(float i=2;i<=2*n;i+=2){

sum+=1/i*i;


}
printf("%.3f",sum);



}