#include <stdio.h>

void stringReverse(const char* str);


int main() {
    char myString[100]; 

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);

   
    size_t i = 0;
    while (myString[i] != '\0') {
        if (myString[i] == '\n') {
            myString[i] = '\0';
            break;
        }
        i++;
    }

    printf("Original String: %s\n", myString);
    printf("Reversed String: ");
    stringReverse(myString);
    printf("\n");

    return 0;
}
void stringReverse(const char* str)
{
    if (*str == '\0')
    {
        return;
    }
    stringReverse(str + 1);
    putchar(*str);
}