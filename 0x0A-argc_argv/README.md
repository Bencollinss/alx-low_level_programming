# TASKS for argc and argv

## It ain't what they call you, it's what you answer to

Write a program that prints its name, followed by a new line.

If you rename the program, it will print the new name, without having to compile it again
You should not remove the path before the name of the program
**SOLUTION:** [0-whatsmyname.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x0A-argc_argv/0-whatsmyname.c)
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x0A. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x0A. argc, argv$ 
```
## Silence is argument carried out by other means

Write a program that prints the number of arguments passed into it.

Your program should print a number, followed by a new line

**SOLUTION:** [1-args.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x0A-argc_argv/1-args.c)
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
julien@ubuntu:~/0x0A. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x0A. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x0A. argc, argv$
```
## The best argument against democracy is a five-minute conversation with the average vote

Write a program that prints all arguments it receives.

All arguments should be printed, including the first one
Only print one argument per line, ending with a new line

**SOLUTION:** [2-args.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x0A-argc_argv/2-args.c)
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
julien@ubuntu:~/0x0A. argc, argv$ ./args 
./args
julien@ubuntu:~/0x0A. argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/0x0A. argc, argv
```
## Neither irony nor sarcasm is argument

Write a program that multiplies two numbers.

Your program should print the result of the multiplication, followed by a new line
You can assume that the two numbers and result of the multiplication can be stored in an integer
If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

**SOLUTION:** [3-mul.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x0A-argc_argv/3-mul.c)
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 3
6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/0x0A. argc, argv$ ./mul 2 0
0
julien@ubuntu:~/0x0A. argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/0x0A. argc, argv$ ./mul
Error
julien@ubuntu:~/0x0A. argc, argv$ 
```
## To infinity and beyond

Write a program that adds positive numbers.

Print the result, followed by a new line
If no number is passed to the program, print 0, followed by a new line
If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
You can assume that numbers and the addition of all the numbers can be stored in an int

**SOLUTION:** [4-add.c](https://github.com/Bencollinss/alx-low_level_programming/blob/master/0x0A-argc_argv/4-add.c)
```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 1
2
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/0x0A. argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/0x0A. argc, argv$ ./add
0
julien@ubuntu:~/0x0A. argc, argv$
```
