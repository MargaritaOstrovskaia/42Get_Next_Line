/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:31:30 by mostrovs          #+#    #+#             */
/*   Updated: 2019/10/08 13:31:36 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 8
# define FD_SIZE 4096

# include "libft/libft.h"
# include <fcntl.h>

int	get_next_line(const int fd, char **line);

#endif
