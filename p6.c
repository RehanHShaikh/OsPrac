#include<stdio.h>
#include<string.h>
int isPallindrome(char *c){
    int len = strlen(c);
    int i;
    for(i = 0; i < len/2; i++)
    {
        if(c[i] != c[len-i-1]) return 0;
    }
    return 1;
}
int main(){
    char str[100];
    int i=0;
    printf("Enter a word or number: ");
    scanf("%s", str);
    if(isPallindrome(str))
        printf("Pallindrome");
    else
        printf("not a Pallindrome");
    return 0;
}