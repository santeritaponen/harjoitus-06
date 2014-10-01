/*Harjoitus 6
Santeri Taponen
Kirjoita ohjelma, joka kysyy k‰ytt‰j‰lt‰ lompakossa olevan raham‰‰r‰n
ja lihapiirakan hinnan.

Ohjelma tutkii, onko k‰ytt‰j‰ll‰ varaa ostaa lihapiirakka.
Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon j‰‰ viel‰ rahaa.
Muuten ohjelma kehottaa k‰ytt‰j‰‰ paastoamaan.

K‰yt‰ vain kahta muuttujaa.‰l‰ v‰henn‰ lompakon sis‰lt‰‰, ellet voi
ostaa lihapiirakkaa.
versio 1
1.10.2014*/
#include <iostream>
using namespace std;
void main()
{
	int raha;
	int hinta;
	int erotus;
	cout << "Paljonko lompakossa on rahaa?\n";
	cin >> raha;
	cout << "Paljonko lihapiirakka maksaa?\n";
	cin >> hinta;
	erotus = raha - hinta; 
		if (raha > hinta)
			cout << "Sinulle j‰‰ rahaa ";
			cout << erotus;
	if (raha < hinta)
		cout << "Paastoa, sinulla ei ole rahaa";
}