# PrintF | 42 São Paulo

<br>

![](https://raw.githubusercontent.com/marianohtl/PrintF/main/img/printf.png)

<br>

Because ft_putnbr() and ft_putstr() aren’t enough

## SUBJECT
[...]
The goal of this project is pretty straightforward. You will recode printf().
You will mainly learn about using a variable number of arguments.

## Mandatory part
<br> 

| FT_PrintF |  |
| ----------- | ----------- |
| Program name | libftprintf.a |
| Turn in files | Makefile, *.h, */*.h, *.c, */*.c |
| Makefile | NAME, all, clean, fclean, re |
| External functs. | malloc, free, write, <br> va_start, va_arg, va_copy, va_end |
| Libft authorized  | Yes |
| Description | Write a library that contains ft_printf(), a <br> function that will mimic the original printf() |


<br> 

You have to recode the printf() function from libc.

The prototype of ft_printf() is:
      int ft_printf(const char *, ...);
<br> 

Here are the requirements:
* Don’t implement the buffer management of the original printf().
* Your function has to handle the following conversions: cspdiuxX%
* Your function will be compared against the original printf().
* You must use the command ar to create your library. Using the libtool command is forbidden.
* Your libftprintf.a has to be created at the root of your repository.
<br> 

You have to implement the following conversions:
* %c Prints a single character.
* %s Prints a string (as defined by the common C convention).
* %p The void * pointer argument has to be printed in hexadecimal format.
* %d Prints a decimal (base 10) number.
* %i Prints an integer in base 10.
* %u Prints an unsigned decimal (base 10) number.
* %x Prints a number in hexadecimal (base 16) lowercase format.
* %X Prints a number in hexadecimal (base 16) uppercase format.
* %% Prints a percent sign.

<br> 

## Bonus part

You don’t have to do all the bonuses.
Bonus list:
* Manage any combination of the following flags: ’-0.’ and the field minimum width
under all conversions.
* Manage all the following flags: ’# +’ (Yes, one of them is a space).

<br>

If you plan to complete the bonus part, think about the implementation of your extra features from the start. This way, you will avoid the pitfalls of a naive approach. *

<br>

The bonus part will only be assessed if the mandatory part is PERFECT. Perfect means the mandatory part has been integrally done and works without malfunctioning. If you have not passed ALL the mandatory requirements, your bonus part will not be evaluated at all. *
