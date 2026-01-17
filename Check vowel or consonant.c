#include<stdio.h>

int main()
{
    char c;
    int uc,lc;
    
    printf("Enter an Alphabet:");
    scanf("%c",&c);
    
    uc=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    lc=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    
    if(uc || lc)
       printf("%c is a Vowel",c);
    else
       printf("%c is a Consonant",c);   
    return 0;
}