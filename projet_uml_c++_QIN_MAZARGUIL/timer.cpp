/**
 * \file         timer.h
 *                     Fichier .cpp pour les timer
 * \author     MAZARGUIL Marlon
 * \author     QIN Xiaotong
 * \date         14/02/2022
 * \version 1.0
 */
#include "timer.h"


entrees *io_timer;
int shmid_timer;
int depart_timer;

void Timer::timer_initialiser()
{
	io_timer=acces_memoire(&shmid_timer);

	if (io_timer==NULL) cout<<"Erreur pas de mem sh"<<endl;
	
	depart_timer=io_timer->timer_sec;
}

void Timer::time_raz(){
	depart_timer=io_timer->timer_sec;
}

int Timer::time_valeur(){
	return io_timer->timer_sec-depart_timer;
}

