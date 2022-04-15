/**
 * @file Bouton.cpp
 * Fichier .cpp pour les boutons
 * @author MAZARGUIL Marlon
 * @author QIN Xiaotong
 * date 14/02/2022
 * @version 1.0
 */
#include "Bouton.h"

entrees *io_b;
int shmid_b;

void Bouton::Bouton_initialiser()
{
	io_b=acces_memoire(&shmid_b);
	if(io_b==NULL)
		cout<<"erreur pas de mem sh \n";
	io_b->bouton_charge=0;
}

int Bouton::Bouton_push()
{
	return io_b->bouton_charge;
}
