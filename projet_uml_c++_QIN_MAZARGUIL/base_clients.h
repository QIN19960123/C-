/**
 * \file 		base_clients.h
 * 					Fichier .h avec toute les données sur les clients
 * \author 	MAZARGUIL Marlon
 * \author 	QIN Xiaotong
 * \date 		14/02/2022
 * \version 1.0
 */

#ifndef BASE_CLIENTS_H
#define BASE_CLIENTS_H
#include "lcarte.h"
#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"


/**
 * \namespace std
 * Espace de nom pour la base de donnée
 */
using namespace std;

/**
 * \class BDD
 * 				Represente les classes en rapport avec la base de données
 */
class BDD
{
  public : 
	//BDD_clients();
 
  /**
   * \fn 			num_carte_Clients(int numero_carte_ins)
   * \param 	numero_carte_ins pour avoir le numéro de la carte inséré
    *\ returns 0 si la carte n'est pas enregistré \n
	 * 					ou un entier positif qui correspond à l'ID (identifiant) du client
	*/
	int num_carte_Clients(int numero_carte_ins);

  /**
   * \param 	numero_carte_ins pour avoir le numéro de la carte inséré
	 * @returns 0 si la carte n'est pas enregistré \n 
	 * 					ou un entier positif qui correspond à l'ID (identifiant) du client
	*/
	int code_Clients(int numero_carte_ins);

	  /**
   * @brief 		permet d'ajouter des cartes et de mettre les mots de passe
   * @note 			Ma carte numéro 32 correspont à la carte administrateur
   * @attention La foncition n'est pas fini
   * @warning 	Ne pas mettre la carte numéro 32
	*/
	int carte_admin();
};



#endif // BASE_CLIENTS_H
