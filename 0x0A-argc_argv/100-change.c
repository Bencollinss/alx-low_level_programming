#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that prints the minimum number of coins
 *
 * Return: Nothing
 */

int main(int argc, char **argv)
{
if (argc != 2)
{
printf("Error\n");
return 1;
}

int cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return 0;
}

int coins = 0;
while (cents > 0) 
{
if (cents >= 25)
{
cents -= 25;
coins++;
}
else if (cents >= 10)
{
cents -= 10;
coins++;
}
else if (cents >= 5)
{
cents -= 5;
coins++;
}
else if (cents >= 2)
{
cents -= 2;
coins++;
}
else
{
cents -= 1;
coins++;
}
}

printf("%d\n", coins);
return 0;
}
