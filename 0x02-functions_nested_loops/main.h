#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
        char alp[8] = "_putchar";
        int i;

        for (i = 0; i < 8; i++)
        {
                putchar(alp[i]);
        }
        putchar('\n');
        return (0);
}

#include <stdio.h>

/**
 * main - print the alphabets in small letters and in capital letters.
 *
 * Return: Always 0.
 */

void print_alphabet(void);
int main(void)
{
        char print_alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
        int i;

        for (i = 0; i < 26; i++)
        {
        putchar(print_alphabet[i]);
        }
        putchar('\n');
        return (0);
}
