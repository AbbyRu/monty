#include "monty.h"
void (*get_inst(char *s))(stack_t, unsigned int line_num)
{
	instruction_t inst[] = {
		{"pall", op_pall},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (inst[i].opcode != NULL && *(inst[i].opcode) != *s)
}

/**
 * main - runs stack operations
 *
 * @argc: stores the number of command line arguments
 * @argv: an array of pointers for all the command line arguments
 *
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	char *file_name, *str, *opcode, *num_str;
	int num;
	unsigned int lines, line = 1;
	stack_t *stack;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_name = argv[1];
	lines = line_num(file_name);
	stack = NULL;
	while ((lines + 1) > line)
	{
		str = read_line(file_name, line);
		opcode = strtok(str, " ");
		if ((strcmp(opcode, "push") == 0))
		{
			num_str = strtok(NULL, " ");
			num = atoi(num_str);
			op_push(&stack, num);
		}
		else
		{
			op_pall(stack);
		}
		line++;

	}
	return (0);
}
