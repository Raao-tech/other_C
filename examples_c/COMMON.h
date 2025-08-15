/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   COMMON.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:56:42 by rafael            #+#    #+#             */
/*   Updated: 2025/08/14 23:15:04 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_H
# define COMMON_H

void	ft_prichar(char	*str, int	new_line);
int		ft_is_scale(char *str);
int		ft_is_unity(char *str);
int		ft_correct_unity(char *str, char (*unitys)[3]);

#endif