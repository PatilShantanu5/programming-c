#include<stdio.h>

int main(){
int y;

printf("enter any year:");
scanf("%d",&y); //(1) 1200 1600 2000 2400
                //(2) 2012 2016 2020....2096 and(3)2100 2200 2300 2500(its not leap year)

if(y%400==0 || y%4==0 && y%100!=0)
{
 printf("its leap year");

}
else{
    printf("its not leap year birthday bhul ja bhai");
}




    return 0;
 }