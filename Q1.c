#include<stdio.h>
int main(){
    int i , sum = 0 , y ;
    printf("GIVE ME THE REQUIRED NUMBER TO CHECK : ");
    scanf("%d",&i);
    y = i;
    while(i>0){
        sum = sum + (i%10)*(i%10)*(i%10) ;
        i = i/10 ;
    }
    if(sum==y)
        printf("The given number is armstrong number!");
    
    else
        printf("The given number is not armstrong number!");
    return 0;

}
