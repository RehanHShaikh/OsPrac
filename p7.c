#include <stdio.h>
int main(){
    int firstTerm=0, secondTerm=1, nextTerm;
    int nterms, i;
    printf("How many terms do you want to print? : ");
    scanf("%d",&nterms);
    for(i=1; i<=nterms; i++){
        if(i==1) printf("%d ",firstTerm);
        else if(i==2) printf("%d ",secondTerm);
        else{
            nextTerm=firstTerm+secondTerm;
            printf("%d ",nextTerm);
            firstTerm=secondTerm;
            secondTerm=nextTerm;
        }
    }
    return 0;
}