This project has been created as part of the 42 curriculum by jperez-u.

# Description

Let's first define what a variadic function is.

Variadic functions are functions that can take a variable number of arguments. This feature is useful when the number of arguments is unknown in advance. A variadic function takes at least one fixed argument, followed by any number of additional arguments.

To access these arguments in C, we use `va_list`, `va_start`, `va_arg`, and `va_end` from the `stdarg.h` header.

- `va_list` (Type): A special type used as a state holder to keep track of the current position in the list of arguments.

- `va_start(va_list ap, last_fixed)` (Macro): Initializes the `va_list` object. It must be called before accessing any arguments. The `last_fixed` parameter is the last mandatory argument before the ellipsis (`...`).

- `va_arg(va_list ap, type)` (Macro): Retrieves the next argument in the list and advances the internal pointer. You must specify the expected type (`int`, `char *`, etc.) so the macro knows how many bytes to read.

- `va_end(va_list ap)` (Macro): Cleans up the `va_list` object after use. It should always be called before returning from the function.

I used recursion in this project to print numbers and hexadecimal values digit by digit.

The main function of the project is:

```c
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;
	int		written;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (end_error(args));
		if (format[i] == '%')
			written = print_format(format[++i], args);
		else
			written = print_char(format[i]);
		if (add_written(&count, written) == -1)
			return (end_error(args));
		i++;
	}
	va_end(args);
	return (count);
}
```

Basically, this function checks for errors, prints the required characters, and returns the total number of printed characters, similar to the original `printf` function.

If `format[i]` is equal to `'%'`, the function moves to the next character and calls `print_format()`:

```c
print_format(format[++i], args);
```

The magic happens here:

```c
int	print_format(char format, va_list args)
{
	if (format == 'c') 
		return (print_char(va_arg(args, int)));
	else if (format == 's')
		return (print_string(va_arg(args, char *)));
	else if (format == 'p') 
		return (print_pointer(va_arg(args, void *)));
	else if (format == 'd' || format == 'i')
		return (print_number(va_arg(args, int)));
	else if (format == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (print_hex(va_arg(args, unsigned int), 'x'));
	else if (format == 'X')
		return (print_hex(va_arg(args, unsigned int), 'X'));
	else if (format == '%')
		return (print_char('%'));
	return (-1);
}
```
The function ```print_format``` takes to arguments ```char format, va_list args```, ```format``` is the character after ```%``` and ```args``` is an object that allows traversing variable arguments and va_arg calls the next argument a X type.

# Instructions

To compile all files:

```bash
make
```

To compile `main.c`:

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -o test
```

To execute the program:

```bash
./test
```

# Resources

- [Understanding ft_printf](https://www.youtube.com/watch?v=Hb2m7htiKWM&t=267s)
- [Variadic functions](https://www.youtube.com/watch?v=7Sph8JlRo0g)
- [Variadic functions in C - GeeksforGeeks](https://www.geeksforgeeks.org/c/variadic-functions-in-c/)
- [Visualize code execution](https://pythontutor.com/visualize.html#)
- [va_list, va_start, va_arg and va_end](https://learn.microsoft.com/ja-jp/cpp/c-runtime-library/reference/va-arg-va-copy-va-end-va-start?view=msvc-170)

## AI disclosure

I used AI to test my code using main.c file.