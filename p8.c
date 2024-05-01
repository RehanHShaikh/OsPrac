#include <stdio.h>
int main(){
    int n1, n2, n3, max;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    max = (n1>n2) ? n1 : n2;
    max = (max>n3) ? max : n3;
    printf("greatest number = %d",max);
    return 0;
}