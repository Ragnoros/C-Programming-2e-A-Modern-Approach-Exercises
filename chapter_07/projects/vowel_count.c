// Write a program that counts vowels in a sentence

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    int sentence;
    int count = 0;
    bool run = true;
    printf("Please enter a sentence: ");

    while ((sentence = getchar()) != EOF && sentence != '\n')
    {
        sentence = tolower(sentence);

        switch (sentence)
        {
        case 'a':
            count += 1;
            break;
        case 'e':
            count += 1;
            break;
        case 'i':
            count += 1;
            break;
        case 'o':
            count += 1;
            break;
        case 'u':
            count += 1;
            break;
        }
    }
    printf("Your sentence contains %d vowels", count);
    return 0;
}