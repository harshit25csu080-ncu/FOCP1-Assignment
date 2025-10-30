#include <stdio.h>
int main(){
    int n,count=0;

    printf("What is the number of total students: ");
    scanf("%d",&n);

    int marks[n];

    for(int i=0;i<n;i++){
        printf("Enter marks: ");
        scanf("%d",&marks[i]);
    }

    for(int j=0;j<n;j++){
        if(marks[j]==99){
            count++;
        }
    }
    printf("The Number of students who scored 99 marks are %d",count);
    return 0;
}
