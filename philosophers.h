/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 07:55:49 by abelarif          #+#    #+#             */
/*   Updated: 2021/07/23 07:43:08 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
#define PHILOSOPHERS_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/time.h>
#include <pthread.h>
#include <limits.h>
# define KNRM  "\x1B[0m"
# define KRED  "\x1B[31m"
# define KGRN  "\x1B[32m"
# define KYEL  "\x1B[33m"
# define KBLU  "\x1B[34m"
# define KMAG  "\x1B[35m"
# define KCYN  "\x1B[36m"
# define KWHT  "\x1B[37m"

typedef struct s_philosophers
{
    int             nb;
    int             nbforks;
    int             *forks;
    int             time_to_die;
    int             time_to_eat;
    int             time_to_sleep;
    int             eat_repeat;
}                   t_philosophers;


int         ft_isdigit(char c);
int         ft_atoi(const char *str);
int         args_checker(char *argv[]);
int         *parsing(int argc, char *argv[]);
int         philosophers(int argc, char *argv[]);

void        ft_error(char *descriptor);
void        free_philos(t_philosophers *philos);

size_t      ft_strlen(const char *str);

#endif
