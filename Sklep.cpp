
#include "pch.h"
#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <vector>
#include "Man.h"
#include "Female.h"
#include "Male.h"
#include "Product.h"

using namespace std;


static vector <Product> VProducts =
{
	Product("Mleko", 2.79),
	Product("Jaja", 9.89 ),
	Product ("Jogurt", 1.59),
	Product("Serek wiejski", 2.89),
	Product ("Ser żółty", 4.09),
	Product("Makaron", 3.09),
	Product("Kasza", 1.69),
	Product("Płatki kukurydziane", 7.19),
	Product("Dżem", 9.89),
	Product("Chrupki kukurydziane", 3.99),
	Product("Chipsy cebulowe", 5.79),
	Product("Herbata", 4.49),
	Product("Kawa", 13.99),
	Product("Woda mineralna", 1.59),
	Product("Sok pomarańczowy", 4.29),
	Product("Warzywa mrożone", 3.45),
	Product("Lody śmietankowe", 7.99),
	Product("Filet z piersi kurczaka", 18.99),
	Product("Parówki", 5.46),
	Product("Pasztet", 3.32),
	//20 produktów
};

void GoToCashier()
{

}

void AddToBasket()
{
	srand(time(NULL));
	int liczba_produktów = std::rand() % 20;
	VProducts[liczba_produktów].getProduct();
	
}

int main()
{	
	Man ktos; 

	ktos.setMan(23, 170, "male", "3487438743873");
	ktos.getMan();
	
	
	Female Marta("Magda", "Nazwisko", 33, 151, "Kobieta", "2334243234");

	//Male Romek("Roman", "Jakiśtam", 40, 180, "Mężczyzna", "234324323");

	Female Monika;


}

