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

int Valikko(void)
{
	int temp;
	cout << "VALIKKO\n0 Lopeta\n1 Lis\x84\x84 henkil\x94\n2 N\x84yt\x84 kaikki henkil\x94t\n";
	cin >> temp;
	return temp;
}

void TulostaHenkilo(DATA rek[], int num)
{
	printf_s("|%-15s|%5.1f|%10i|\n", rek[num].nimi, rek[num].matka, rek[num].hattu);
}

void TulostaKaikkiHenkilot(DATA[], int lkm)
{
	printf_s("\n/===============|=====|==========\\\n|    Etunimi    |Matka|Hatun koko|\n|---------------|-----|----------|\n");
	for (int n = 0; n < i; n++)
		TulostaHenkilo(rekisteri, n);
	printf_s("\\===============|=====|==========/\n\n");
}

void LisaaHenkilo(DATA rek[], int *lkm)
{
	if (*lkm == 10)
		cout << "\nRekisteri t\x84ynn\x84\n\n";
	else
	{
		cout << "\nEtunimi: ";
		cin >> rek[*lkm].nimi;
		cout << "Koulumatka: ";
		cin >> rek[*lkm].matka;
		cout << "Hatun koko: ";
		cin >> rek[*lkm].hattu;
		i++;
		cout << "\n";
	}
}