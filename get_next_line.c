/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkay-hoo <nkay-hoo@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:30:36 by nkay-hoo          #+#    #+#             */
/*   Updated: 2021/08/22 14:31:03 by nkay-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	if (!fd)
		return (0);
	buffer = malloc (BUFFER_SIZE)
	reader = read(fd, buffer, BUFFER_SIZE);
	if(!reader)
		return (0);
}
