#include <stdio.h>
#include <string.h>

int main(){

    char string[50];
    int i;
    size_t length;
    int a = 0;

    printf("Please type a word: ");
    scanf("%s", string);

    // Getting the lenght of the word
    length = strlen(string);
    printf("The word contains %zu letters\n", length);

    // Tells if the word is a palindrome
    for(i = 0; i < length; i++)

    {
        if(string[i]!= string[length-i-1])
        {
            a = 1;
            break;
        }
    }

    if (a) {
        printf("The word is not a palindrome");
    }
    else {
        printf("The word is a palindrome");
    }

    // Getting the reversed word
    length = strlen(string);

    for (size_t i = 0; i < length / 2; i++)
    {
        // Make a copy of the left half character so we don't lose it
        char b = string[i];

        // Replace the left half character with the right half character
        string[i] = string[length - i - 1];

        // Replace the right half character with the left half character
        string[length - i - 1] = b;
    }
    printf("\nThe word reversed is '%s'", string);

}




