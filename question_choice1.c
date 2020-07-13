#include <stdio.h>
#include <stdlib.h> //Support for system("pause")

int main()
{ 
    system("chcp 65001"); //This is for chinese can print right in Windows cmd, it change cmd to print UTF-8.

    char ch;

    printf("<question1>\n");
    printf("<question2>\n");
    printf("<question3>");

    scanf("%c", &ch); //Input some thing

    if(ch == '1' )
        printf("%c<reply1>\n", ch);
        
    else if(ch == '2' )
        printf("%c<reply2>\n", ch);

    else
        printf("%c<reply3>\n", ch);
    
    system("pause"); //For program can stop to print words.

    return 0;
}