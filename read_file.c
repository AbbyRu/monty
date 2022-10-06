#include "monty.h"
#include <stdbool.h>
#define MAX_LINE 2048

/**
 * line_num - get number of lines in .m file
 *
 * @filename: The file name (path)
 *
 * Return: the number of lines in a .m file
 */

unsigned int line_num(char *filename)
{
	FILE *fp;
	unsigned int line_count= 0;
	char c, line_end = '$';
	
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	c = getc(fp);
	while (c != EOF)
	{
		if (c == line_end)
			line_count++;
		c = getc(fp);
	}
	fclose(fp);

	return (line_count);
}

/**
 * read_line - read a specific line from a file
 *
 * @filename: the file name
 *
 * Return:
 */

char *read_line(char *filename, unsigned int n)
{	FILE *fp;
	char buffer[MAX_LINE];
	char *str;
	bool keep_reading = true;
	unsigned int current_line = 1;
	
	fp = fopen(filename, "r");
	if (fp == NULL)
        {
                printf("Error: Can't open file %s\n", filename);
                exit(EXIT_FAILURE);
        }
	do
	{
		fgets(buffer, MAX_LINE, fp);
		if (feof(fp))
		{
			keep_reading = false;
			exit(EXIT_FAILURE);
		}
		else if (current_line == n)
		{
			keep_reading = false;
			str = buffer;
		}
		current_line++;
	} while (keep_reading);
	fclose(fp);
	return (str);
}
