/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_status.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelarif <abelarif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:33:39 by abelarif          #+#    #+#             */
/*   Updated: 2021/08/30 15:46:22 by abelarif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	print_status(t_philosophers *philosopher, int status)
{
	unsigned long long	time;

	time = get_time();
	pthread_mutex_lock(philosopher->status_mutex);
	if (status == DIED_STATUS)
	{
		printf("%s%llu%s %d %s\n", KCYN, time, KWHT, philosopher->id, PH_DIED);
		pthread_mutex_lock(philosopher->status_mutex);
	}
	else
	{
		if (status == EAT_STATUS)
			printf("%s%llu%s %d %s\n", KCYN, time, KWHT, philosopher->id, PH_EATING);
		else if (status == SLEEP_STATUS)
			printf("%s%llu%s %d %s\n", KCYN, time, KWHT, philosopher->id, PH_SLEEPING);
		else if (status == THINK_STATUS)
			printf("%s%llu%s %d %s\n", KCYN, time, KWHT, philosopher->id, PH_THINKING);
		else if (status == TAKE_FORKS_STATUS)
			printf("%s%llu%s %d %s\n", KCYN, time, KWHT, philosopher->id, PH_FORK);
		pthread_mutex_unlock(philosopher->status_mutex);
	}
}
