//solve no.21
#include<stdio.h>
int main(){
int n,mult=1;

scanf("%d",&n);

while(n!=0){

mult*=n%10;

n/=10;

}

printf("%d",mult);
}