/*		Valtteri Louhelainen

Jaa aiemmin esitetty henkil�rekisteri-ohjelma omiin "osa-projekteihin" ja
otsikkotiedostoihin. Laita p��ohjelma omaan tiedostoon (paa.cpp),
aliohjelmat omaan tiedostoon (ali.cpp) ja
m��ritelm�t omaan otsikkotiedostoon (maarittely.h).

Projekti tulee koostaa toimivaksi Visual Studio-
ymp�rist�sss�.*/

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
