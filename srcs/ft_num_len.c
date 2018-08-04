int		ft_num_len(int n)
{
	return (n / 10 ? (ft_num_len(n / 10) + 1) : 1);
}
