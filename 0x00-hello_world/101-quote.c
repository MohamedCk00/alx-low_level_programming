#include <unistd.h>

/**
 * main - prints an error message to stderr
 *
 * Return: 1
 */
int main(void)
{
	const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 59;
	
	/* write the message to stdout */
	if (write(1, msg, len) != len)
        return 1;

	/* print the length of the message to stdout */
	printf("[Got]:\n%.*s", 7, msg);
	printf("(%d chars long)\n", 7);

	/* print an empty stderr message */
	fprintf(stderr, "[stderr]: [Anything]\n");

	return 1;
}
