// Check for alphabet
#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    printf("\nThe character is vowel");
    else
    printf("\nThe character is consonant");
    return 0;
}