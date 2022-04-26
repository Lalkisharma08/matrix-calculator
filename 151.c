#include <stdio.h>

int main()
{
    int n;
    printf("press 1 for 2*2 matrix\n");
    printf("press 2 for 3*3 matrix\n");
    printf("select the type of matrix you want to solve:");
    scanf("%d",&n);
    if(n==1){
        printf("2*2 matrix calculator:");
        int a1,b1,a2,b2,m;
        scanf("\n%d%d",&a1,&b1);
        scanf("\n%d%d",&a2,&b2);
        m=(a1*b2)-(a2*b1);
        printf("%d",m);
    }
    else if(n==2){
        printf("3*3 matrix calculator:");
        int a1,b1,c1,a2,b2,c2,a3,b3,c3,n;
        scanf("\n%d%d%d",&a1,&b1,&c1);
        scanf("\n%d%d%d",&a2,&b2,&c2);
        scanf("\n%d%d%d",&a3,&b3,&c3);
        n=a1*((b2*c3)-(b3*c2))-b1*((a2*c3)-(a3*c2))+c1*((a2*b3)-(a3*b2));
        printf("%d",n);
    }
    return 0;
}
