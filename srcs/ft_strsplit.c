char    **ft_strsplit(char const *s, char c)
{
    int     left;
    int     right;

    right = 0;
    while (s[right])
    {
        if (s[right] == c)
        {
            left = right;
        }
        right++;
    }
}