/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:02:34 by tebandam          #+#    #+#             */
/*   Updated: 2023/08/20 18:05:58 by megadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);
int		ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_atoi(argv[3]) == 1)
			rush00(ft_atoi(argv[1]), ft_atoi(argv[2]));
		else if (ft_atoi(argv[3]) == 2)
			rush01(ft_atoi(argv[1]), ft_atoi(argv[2]));
		else if (ft_atoi(argv[3]) == 3)
			rush02(ft_atoi(argv[1]), ft_atoi(argv[2]));
		else if (ft_atoi(argv[3]) == 4)
			rush03(ft_atoi(argv[1]), ft_atoi(argv[2]));
		else if (ft_atoi(argv[3]) == 5)
			rush04(ft_atoi(argv[1]), ft_atoi(argv[2]));
		else
			write(1, "Invalid Rush Argument", 21);
	}
	else
		write(1, "Invalid Arguments", 17);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	a;
	int	count;

	i = 0;
	a = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + (str[i] - '0');
		i++;
	}
	return (a * count);
}
