char    *ft_strcat(char *s1, const char *s2)
{
    int     i;

    i = 0;
    while (s1[i++]);
    while ((s1[-1 + i++] = *s2++));
    return (s1);
}