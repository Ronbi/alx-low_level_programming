/**
 * _putchar - writes the character to print
 *
 * Return: 1 for success
 * and -1 for error and error is set
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
