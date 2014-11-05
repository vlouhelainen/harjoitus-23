/*		Valtteri Louhelainen

Jaa aiemmin esitetty henkilörekisteri-ohjelma omiin "osa-projekteihin" ja
otsikkotiedostoihin. Laita pääohjelma omaan tiedostoon (paa.cpp),
aliohjelmat omaan tiedostoon (ali.cpp) ja
määritelmät omaan otsikkotiedostoon (maarittely.h).

Projekti tulee koostaa toimivaksi Visual Studio-
ympäristösssä.*/

#include <iostream>
#include "maarittely.h"
using namespace std;

DATA rekisteri[10];
int valinta;
bool jatka = true;
int i = 0;
int *pointer = &i;

int Valikko(void);
void TulostaHenkilo(DATA rek[], int num);
void TulostaKaikkiHenkilot(DATA[], int lkm);
void LisaaHenkilo(DATA rek[], int *lkm);

void main()
{
	while (jatka)
	{
		valinta = Valikko();
		if (valinta == 0)
			jatka = false;
		if (valinta == 1)
			LisaaHenkilo(rekisteri, pointer);
		if (valinta == 2)
			TulostaKaikkiHenkilot(rekisteri, i);
	}
}
