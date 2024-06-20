/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:39:18 by ayermeko          #+#    #+#             */
/*   Updated: 2024/06/20 17:56:32 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int main(int argc, char *argv[])
{
    t_game data;
    
    init_struct_pointers(&data);
    create_map(&data, argc, argv);
    free_end(&data); //none
    return (0);
}
