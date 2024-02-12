#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int x;
ssize_t bye;
char buf[READ_BUF_SIZE];

if (!filename || !letters)
{
return (0);
}
x = open(filename, O_RDONLY);
if (x == -1)
{
return (0);
}
bye = read(fd, buf[0], letters);
bye = write(STDOUT_FILENO, &buf[0], bye);
close(x);
return (bye);
}
