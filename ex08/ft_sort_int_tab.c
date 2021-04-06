/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangoh <sangoh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 22:34:39 by sangoh            #+#    #+#             */
/*   Updated: 2021/04/02 00:36:02 by sangoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int array_index1;
	int array_index2;

	array_index1 = 0;
	while (array_index1 <= size - 2)
	{
		array_index2 = array_index1 + 1;
		while (array_index2 <= size - 1)
		{
			if (tab[array_index1] > tab[array_index2])
			{
				temp = tab[array_index1];
				tab[array_index1] = tab[array_index2];
				tab[array_index2] = temp;
			}
			array_index2++;
		}
		array_index1++;
	}
}
