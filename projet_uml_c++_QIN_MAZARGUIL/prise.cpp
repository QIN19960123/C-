/**
 * @file prise.cpp
 * Fichier .cpp pour l'état des prises
 * @author MAZARGUIL Marlon
 * @author QIN Xiaotong
 * date 14/02/2022
 * @version 1.0
 */
#include "prise.h"


entrees *io_p;
int shmid_p;

void Prise::initialiser()
{
	io_p=acces_memoire(&shmid_p);
	if(io_p==NULL)
		cout<<"erreur pas de mem sh \n";
	io_p->led_trappe=OFF; 
}

void Prise::set_trappe(led color)
{
	io_p->led_trappe=color;
}

void Prise:: set_prise(led color)
{
	io_p->led_prise=color;
 
}
