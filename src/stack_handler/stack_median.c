/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_median.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:18:23 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/23 10:18:42 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stack_median(int *stack, int qty, int *set_median)
{
	*set_median = *(stack + (qty / 2));
	if (qty % 2 == 0)
	{
		*set_median += *(stack + ((qty / 2) - 1));
		*set_median /= 2;
	}
}
