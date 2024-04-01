# Printf project

## Description:
The _printf() function produces output according to a format which is described below. This function write its output to the stdout, the standard output stream. Returns the count of printed characters when the function is successful and -1 when the function fails.

## Compilation
$ gcc -Wall -Werror -Wextra -pedantic *.c

## Prototype
int _printf(const char *format, ...)

## Return
 If everything is succesful the function returns the number of characteres printed. 

 ## Formats:
 
The available convertion specifiers are:

    %c: Prints a single character.
    %s: Prints a string of characters.
    %d: Prints integers.
    %i: Prints integers.
    %b: Prints the binary representation of an unsigned decimal.
    %u: Prints unsigned integers
    %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
    %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
    %r: Prints a reversed string


## Project files:

*main.h : Header file
         Include all function prototypes
         Include structure of specifiers

*_printf.c: Project function: _printf
            Iterates string format of entry and check for a moldule symbol (%) . If the symbol is found then check if the next char match with one of 
            the valid specifiers in the structure using the auxiliar function to comapare ( comp), in that case the respective function of these format is called.

* *.c : all files use for create printf
    
![flowchart](https://github.com/essioui/holbertonschool-printf/blob/main/tets/Untitled%20Diagram.drawio.png)





