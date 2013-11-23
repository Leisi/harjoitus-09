/******************************************
* Tehtävä: harjoitus 9
* Tekijä Joni Laine
* PVM: 24.9.2013
* Kuvaus:
*		
*		
*		
*
*******************************************/

#include <iostream>
using namespace std;

int main()
{
int luku1, luku2, toiminto;

cout<<"Anna luku: ";
cin>> luku1;
cout<<"Anna luku ";
cin>> luku2;

cout <<"VALIKKO"<<endl;
cout <<"1. Summa"<<endl;
cout <<"2. Erotus"<<endl;
cout <<"3. Tulo"<<endl;
cout <<"4. Osamaara"<<endl;
cout <<"5. Jakojaannos"<<endl;
cin >> toiminto;

if(toiminto == 1)
	cout<< "Summa" << (luku1+luku2) <<endl;

else if(toiminto == 2)
	cout<< "Erotus" << (luku1-luku2) <<endl;

else if(toiminto == 3)
	cout<< "Tulo" << (luku1*luku2)<<endl;

else if(toiminto == 4)
	cout<< "Osamaara" <<(luku1/luku2)<<endl;
else if(toiminto == 5)
	cout<< "Jakojaannos"<<(luku1%luku2)<<endl;
else
	cout <<" Ei pysty....."<< endl;




return 0;
}