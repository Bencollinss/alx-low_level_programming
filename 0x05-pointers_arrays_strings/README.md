# pointers, arrays and strings

# Learning Objective

* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

# Task

## Battery st.

write a function that takes a pointer to an int as parameter 
and updates the value it points to to `98`.

* Prototype: `void reset_to_98(int *n);`

**Solution:** [0-reset_to_98.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/0-reset_to_98.c)

```
$ julien@ubuntu:~/0x05$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
$ julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
$ julien@ubuntu:~/0x05$ ./0-98 
n=402
n=98
$ julien@ubuntu:~/0x05$ 
```

## Don't swap horses in crossing a stream

Write a function that swaps the values of two integers

* Prototype: `void swap_int(int *a, int *b);`

**Solution:** [1-swap.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/1-swap.c)

```
$ julien@ubuntu:~/0x05$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
$ julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
$ julien@ubuntu:~/0x05$ ./1-swap 
a=98, b=42
a=42, b=98
$ julien@ubuntu:~/0x05$

```
## This report, by its very length, defends itself against the risk of being read

Write a function that returns the length of a string.

* Prototype: `int _strlen(char *s);`

**Solution:** [2-strlen.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/2-strlen.c)

```
$julien@ubuntu:~/0x05$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
$ julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
$ julien@ubuntu:~/0x05$ ./2-strlen 
16
$ julien@ubuntu:~/0x05$
```
## I do not fear computers. I fear the lack of them

Write a function that prints a string, followed by a new line, to `stdout`.

* Prototype: `void _puts(char *str);`

**Solution:** [3-puts.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/3-puts.c)

```
$ julien@ubuntu:~/0x05$ cat 3-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
$ julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
$ julien@ubuntu:~/0x05$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
$ julien@ubuntu:~/0x05$
```
## I can only go one way. I've not got a reverse gear

Write a function that prints a string, in reverse, followed by a new line.

* Prototype: `void print_rev(char *s);`

**Solution:** [4-print_rev.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/4-print_rev.c)

```
$ julien@ubuntu:~/0x05$ cat 4-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
$ julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
$ julien@ubuntu:~/0x05$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
$ julien@ubuntu:~/0x05$
```
## A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

Write a function that reverses a string

* Prototype: `void rev_string(char *s);`

**Solution:** [5-rev_string.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/4-rev_string.c)

```
$ julien@ubuntu:~/0x05$ cat 5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
$ julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string
$ julien@ubuntu:~/0x05$ ./5-rev_string 
My School
loohcS yM
$ julien@ubuntu:~/0x05$
```
## Half the lies they tell about me aren't true

Write a function that prints every other character of a string, starting with the first character, followed by a new line

* Prototype: `void puts2(char *str);`

**Solution:** [6-puts2.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/6-puts2.c)

```
$ julien@ubuntu:~/0x05$ cat 6-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
$ julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2
$ julien@ubuntu:~/0x05$ ./6-puts2 
02468
$ julien@ubuntu:~/0x05$
```
## Winning is only half of it. Having fun is the other half

Write a function that prints half of a string, followed by a new line

* Prototype: `void puts_half(char *str);`

**Solution:** [7-puts_half.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/7-puts_half.c)

```
julien@ubuntu:~/0x05$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
julien@ubuntu:~/0x05$ ./7-puts_half 
56789
julien@ubuntu:~/0x05$ 
```
## Arrays are not pointers

Write a function that prints n elements of an array of integers, followed by a new line.

* Prototype: `void print_array(int *a, int n);`

**Solution:** [8-print_array.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/8-print_array.c)

```
julien@ubuntu:~/0x05$ cat 8-main.c
#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array
julien@ubuntu:~/0x05$ ./8-print_array 
98, 402, -198, 298, -1024
julien@ubuntu:~/0x05$
```
## strcpy

Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`

* Prototype: `char *_strcpy(char *dest, char *src);`

**Solution:** [9-strcpy.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/9-strcpy.c)

```
julien@ubuntu:~/0x05$ cat 9-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
julien@ubuntu:~/0x05$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
julien@ubuntu:~/0x05$
```
## Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers

Write a function that convert a string to an integer.

* Prototype: `int _atoi(char *s);`

**Solution:** [100-atoi.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x05-pointers_arrays_strings/100-atoi.c)

```
julien@ubuntu:~/0x05$ cat 100-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
julien@ubuntu:~/0x05$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
julien@ubuntu:~/0x05$
```

