//solve no.10

#include<stdio.h>

int main (){
float n,sum=0;
scanf("%f",&n);
for(float i=1; i<=n; i++){
sum+=1.0/i;


}

printf("%.3f",sum);



}