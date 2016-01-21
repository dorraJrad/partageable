
#include "Composant1.h"
#include "Composant3.h"
#include "Composant1Version.h"
#include "composant3Version.h"


// declaration des fonctions internes
int addition_interne(int a1, int a2);



int composant1(int p1, int p2)
{
	return composant3(p1,p2);
}

int addition_interne(int a1, int a2)
{
	return a1+a2;
}

char * getComposant1Version()
{	
	char * version1;
	char * version3;
	version1 = "Composant 1 version " COMPOSANT_VERSION_STR;
	version3 = "Composant 3 version " COMPOSANT_VERSION_STR;


	return  "Composant 1 version " COMPOSANT_VERSION_STR +'et' + "Composant 3 version " COMPOSANT_VERSION_STR;
}
