//solve no.26
#include <stdio.h>

int main()
{

  int n, temp,  count = 0,r, arm = 0;

  scanf("%d", &n);
  temp = n;
  while (temp)
  {
    temp /= 10;
    count++;
  }
  

  temp = n;
while(temp!=0){
r=temp%10;
int p=1;
for(int i =1;i<=count;i++){
p*=r;
}
arm+=p;
temp/=10;
}
  
  if (arm == n)
  {
    printf("%d is an Armstrong number\n",n);
  }
  else
  {
    printf("Not an Armstrong number");
  }
  return 0;
}