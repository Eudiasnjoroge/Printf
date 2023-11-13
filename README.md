#Printf Project

Function that produces output according to a format.
Prototype: int _printf(const char *format, ...); Returns: the number of characters printed (excluding the null byte used to end output to strings) format is a character string. The format string is composed of zero or more directives.Handled the following conversion specifiers: c s %

Handled the following conversion specifiers: d i

Handled the following conversion specifiers: u o x X

Used a local buffer of 1024 chars in order to call write as little as possible
