#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int num;
	char buff[100] = "hola";
	printf("\n");
	printf("%10s%nworld\n", av[1], &num);
	printf("res = %d\n", num);
	return (0);
}
