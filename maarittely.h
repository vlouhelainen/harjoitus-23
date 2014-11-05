/*		Valtteri Louhelainen

Jaa aiemmin esitetty henkilörekisteri-ohjelma omiin "osa-projekteihin" ja
otsikkotiedostoihin. Laita pääohjelma omaan tiedostoon (paa.cpp),
aliohjelmat omaan tiedostoon (ali.cpp) ja
määritelmät omaan otsikkotiedostoon (maarittely.h).

Projekti tulee koostaa toimivaksi Visual Studio-
ympäristösssä.*/

struct DATA
{
	char nimi[15];
	float matka;
	int hattu;
};
extern DATA rekisteri[10];
extern int valinta;
extern bool jatka;
extern int i;
extern int *pointer;
