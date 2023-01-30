#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - main function
* @argc: argument number
* @argv: arguments
* Return: 0 always on success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t s_size = 0;
	ssize_t line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Cannot open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (line > 0)
	{
		content = NULL;
		line = getline(&content, &s_size, file);
		bus.content = content;
		counter++;
		if (line > 0)
		{
			execute(content, &stack, counter, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
