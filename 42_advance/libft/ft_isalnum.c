int is_alpha(int c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

int is_num(int c)
{
    if(c >= '0' && c <= '9')
        return (1);
    return (0);
}
int ft_isalnum(int c)
{
    if(is_alpha(c) || is_num(c))
        return (1);
    return (0);
}
/*
#include <stdio.h>
int main(void)
{
    printf("%d\n", ft_isalnum(150));
}*/