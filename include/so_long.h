/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarceau <rmarceau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:49:17 by rmarceau          #+#    #+#             */
/*   Updated: 2023/04/01 13:15:10 by rmarceau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/include/libft.h"
# include "../MLX42/include/MLX42/MLX42.h"

# include <fcntl.h>

typedef struct s_game
{
	mlx_t	*mlx;
	char	**map;
}	t_game;

void	build(t_game *game);
char    **pars_tacus(char *mapfile);

#endif