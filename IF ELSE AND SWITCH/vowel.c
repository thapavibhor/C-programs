#include <stdio.h>
#include <conio.h>

void main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert to lowercase to reduce comparison
    if(ch >= 'A' && ch <= 'Z')
        ch = ch + 32;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("It is a vowel");
    else if((ch >= 'a' && ch <= 'z'))
        printf("It is a consonant");
    else
        printf("Not an alphabet");
}
