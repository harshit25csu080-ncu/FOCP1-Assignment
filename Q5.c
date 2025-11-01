
    #include <stdio.h>
    int main(){
    int x,y ;
    printf("Give the coordinates (x,y) respectively : ");
    scanf("%d,%d",&x,&y);

    if(x>0 && y>0)
    printf("The point (%d,%d) lies in 1st quadrant",x,y);

    else if(x<0 && y>0)
    printf("The point (%d,%d) lies in 2nd quadrant",x,y);

    else if(x<0 && y<0)
    printf("The point (%d,%d) lies in 3rd quadrant",x,y);

    else if(x>0 && y<0)
    printf("The point (%d,%d) lies in 4th quadrant",x,y);

    else if(x==0 && y==0)
    printf("The point (%d,%d) lies on the origin",x,y);

    else if(x==0)
    printf("The point (%d,%d) lies on y axis.",x,y);

    else if(y==0)
    printf("The point (%d,%d) lies on x axis.",x,y);

    else 
    printf("The point (%d,%d) is a invalid point.",x,y);

    return 0;
    }
