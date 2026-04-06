//solve no.5
//multiplication table.
#include<stdio.h>

int main () {


int i, n,tab;
scanf("%d",&n);


for( i=1;i<=10;i++){
tab=i*n;
printf("%d*%d=%d\n",n,i,tab);
}

}