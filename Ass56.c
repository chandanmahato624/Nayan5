#include<stdio.h>
int main(){
    int a[2], b[2],h,m,s;
    printf("Enter the first time.\n");
    printf("Enter Hours : ");
    scanf("%d",&a[0]);
    printf("Enter Minutes : ");
    scanf("%d",&a[1]);;
    printf("Enter Seconds : ");
    scanf("%d",&a[2]);
    printf("\n");
     printf("Enter the second time.\n");
    printf("Enter Hours : ");
    scanf("%d",&b[0]);
    printf("Enter Minutes : ");
    scanf("%d",&b[1]);;
    printf("Enter Seconds : ");
    scanf("%d",&b[2]);

    // Now add two time
   
    s=(a[2]+b[2])%60;
    m=(a[1]+b[1]+((a[2]+b[2])/60))%60;
    h=a[0]+b[0]+((a[1]+b[1]+((a[2]+b[2])/60))/60);
    
    printf("%d %d %d",h,m,s);
}
