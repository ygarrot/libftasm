#include <stdio.h>
extern void ft_bzero();
int main()
{
	char *str = "let s go";
	ft_bzero(str);
	printf("%s", str);
}
