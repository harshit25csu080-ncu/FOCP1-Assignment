#include <Stdio.h>
    int main(){
        int n , i ;
        int j , k , a;

        printf("Enter the number of terms you want in your series : ");
        scanf("%d",&n);
         printf("Enter the first element of series : ");
        scanf("%d",&a);
        printf("Enter the first element of series : ");
        scanf("%d",&j);

        printf("Series : %d,%d",i,j);
        for(i=1 ; i<=n;i++){
            k = a + j ;
            printf(",%d",k);
            a = j ;
            j = k ; 
        }
        return 0 ;
    }
    
