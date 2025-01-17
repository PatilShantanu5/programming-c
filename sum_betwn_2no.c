#include<stdio.h>
#include<conio.h>

int main (){
int n1, n2, sum=0;

printf("enter range: ");

scanf("%d %d", &n1, &n2);

while(n1<=n2)
{
    sum += n1;
    n1++;
}
printf("sum is: %d\n",sum);
return 0; 
    
 }