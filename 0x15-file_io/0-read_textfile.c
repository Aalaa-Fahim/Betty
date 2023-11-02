#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: the file name
 * @letters: numbers of letters printed
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num;
	char buf[READ_BUF_SIZE * 8];

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	num = read(fd, &buf[0], letters);
	num = write(STDOUT_FILENO, &buf[0], num);

	close(fd);
	return (num);
}
