//solve no.19
#include<Stdio.h>

int main (){

int n,last,first;

scanf("%d",&n);

last=n%10;

while(n>=10){

n/=10;


}
first=n;

printf("Sum of First  Last digits=%d ",(first+last));
  return 0;
}