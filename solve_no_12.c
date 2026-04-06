//solve no.12
#include<stdio.h>

int main (){
float n,sum=0;
scanf("%f",&n);
for(float i=1; i<=2*n-1; i+=2){
sum+=1.0/i;


}

printf("%f",sum);



}