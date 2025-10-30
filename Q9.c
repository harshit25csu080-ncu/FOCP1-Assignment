#include <stdio.h>
int main(){
    int n,count=0;

    printf("What is the number of total students: ");
    scanf("%d",&n);

    int A[n];

    for(int i=0;i<n;i++){
        printf("Enter marks of %d student : ",i+1);
        scanf("%d",&A[i]);
    }
    for(int i=0;i<=5;i++){
        if(A[i]==99){
            printf("First occurance of 99 in array A is at position number %d",i+1);
            break;
        }
    }
    return 0;
}
