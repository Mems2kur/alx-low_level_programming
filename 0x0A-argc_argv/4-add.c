#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* num - check - string there are digit
* @s: array str
*
* Return: Always 0 (Success)
*/
int num(char *s)
{
unsigned int i = 0;
while (i < strlen(s))
{
if (!isdigit(s[i]))
{
return (0);
}
i++;
}
return (1);
}
/**
* main - Print the name of the program
* @argc: Count arguments
* @argv: Arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i;
int sum = 0;

for (i = 1; i < argc; i++)
{
if (num(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Erro\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
