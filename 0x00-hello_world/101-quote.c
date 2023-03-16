#include <unistd.h>

/**
 * main - prints an error message to stderr
 *
 * Return: 1
 */
int main(void)
{
	const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(msg) - 1;
	/* write the message to stderr */
	if (write(2, msg, len) != len)
		return 1;
	return 1;
}
