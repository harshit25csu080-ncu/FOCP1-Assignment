#include <stdio.h>
int main(){
    int n,count=0;

    printf("What is the number of total students: ");
    scanf("%d",&n);

    int marks[n];

    for(int i=0;i<n;i++){
        printf("Enter marks of %d student : ",i+1);
        scanf("%d",&marks[i]);
    }

    for(int j=0;j<n;j++){
        if(marks[j]==99){
            count++;
            printf("%dth student got 99 marks\n",j+1);
        }
    }
    printf("The Number of students who scored 99 marks are %d",count);
    return 0 ;

}

