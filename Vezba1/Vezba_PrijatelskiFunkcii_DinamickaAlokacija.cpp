#include <iostream>
#include <cstring>
#include <cassert>
#pragma warning(disable : 4996);

using namespace std;
/*  1. Создади класа Stedac во која ќе користиш статичка податочна членка kamata која ќе ја чува вредноста на годишната камата за сите штедачи и статична податочна членка brojStedaci кој во секој момент кажува колку штедачи има во банката. Останатите податочни членки се lice, bilans и kredit. Името, презимето, адресата и телефонот на секој објeкт од класата Stedac  се сместени во приватна податочна членка lice која е од класaта Covek.  */
class Stedac
{
public:
	static int getBilans() { return bilans; }
	static int getKredit() { return kredit; }
	static int getKamata() { return kamata; }

private:
	static int kamata;
	static int brojStedaci;
	static int bilans;
	static int kredit;
	friend class Covek;
};


class Covek
{
public:
	Covek(const char*, const char*, const char*, const char*);  // konstruktor
	~Covek();                       // destruktor
	static int getbrojStedaci();
	const char* getFirstName() const;  // vrati ime
	const char* getLastName() const;   // vrati prezime
	const char* getAddress() const;  // vrati adresa
	const char* getNumber() const;   // vrati broj


private:
	static int lice;
	char* ime;
	char* prezime;
	char* adresa;
	char* broj;
};

int Stedac::brojStedaci = 0;
int Stedac::bilans = 0;
int Stedac::kredit = 0;
int Stedac::kamata = 0;
Covek::Covek(const char* firstName, const char* lastName, const char* address, const char* number)
{
	ime = new char[strlen(firstName) + 1];
	assert(firstName != 0);   
	strcpy(ime, firstName);

	prezime = new char[strlen(lastName) + 1];
	assert(prezime != 0);   
	strcpy(prezime, lastName);

	adresa = new char[strlen(address) + 1];
	assert(adresa != 0);    
	strcpy(adresa, address);

	broj = new char[strlen(number) + 1];
	assert(broj != 0);
	strcpy(broj, number);

	++Stedac::brojStedaci;  // zgolemi go ststichkiot brojach na stedaci
} //kraj na konstruktorot Covek

Covek::~Covek()
{
	delete[] ime;  
	delete[] prezime;   
	delete[] adresa;
	delete[] broj;
	Stedac::bilans = 0;
	Stedac::kredit = 0;
	Stedac::kamata = 0;
	--Stedac::brojStedaci;  // namali go statichkiot brojach na stedaci
} // kraj na destruktorot na Covek

int Covek::getbrojStedaci() { return Stedac::brojStedaci; }

const char* Covek::getFirstName() const
{
	Stedac::bilans = 1200 + rand() % 10000;  // ne mi bese jasno kako treba da gi odreduva ovie vrednosti za toa staviv random brojki da se menuvaat za sekoj stedac
	Stedac::kredit = 1000 + rand() % 8000;
	Stedac::kamata = 100 + rand() % 500;
	return ime;
} 


const char* Covek::getLastName() const
{
	return prezime;
} 

const char* Covek::getAddress() const
{
	return adresa;
} 

const char* Covek::getNumber() const
{
	return broj;
} 

//Main
int main()
{

	Covek* p1 = new Covek("Jake", "Paul", "Street","16516151");
	Covek* p2 = new Covek("Logan", "Paul", "Street2", "452348412");
	Covek* p3 = new Covek("Samuel", "Louis", "Street3", "65565564");
	Covek* p4 = new Covek("John", "Richard", "Street4", "262151555");

	cout << "Broj na stedaci po instanciranje e "
		<< p1->getbrojStedaci();

	cout << "\n\n\Stedac 1: "
		<< p1->getFirstName()
		<< " " << p1->getLastName()
		<< " " << p1->getAddress()
		<< " " << p1->getNumber() << "\n"
		<< "Bilans: " << Stedac::getBilans()
		<< "\tKredit: " << Stedac::getKredit()
		<< "\tKamata: " << Stedac::getKamata()
		<< "\n\nStedac 2: "
		<< p2->getFirstName()
		<< " " << p2->getLastName()
		<< " " << p2->getAddress()
		<< " " << p2->getNumber() << "\n"
		<< "Bilans: " << Stedac::getBilans()
		<< "\tKredit: " << Stedac::getKredit()
		<< "\tKamata: " << Stedac::getKamata()
		<< "\n\nStedac 3: "
		<< p3->getFirstName()
		<< " " << p3->getLastName()
		<< " " << p3->getAddress()
		<< " " << p3->getNumber() << "\n"
		<< "Bilans: " << Stedac::getBilans()
		<< "\tKredit: " << Stedac::getKredit()
		<< "\tKamata: " << Stedac::getKamata()
	    << "\n\nStedac 4: "
		<< p4->getFirstName()
		<< " " << p4->getLastName()
		<< " " << p4->getAddress()
		<< " " << p4->getNumber() << "\n"
		<< "Bilans: " << Stedac::getBilans()
		<< "\tKredit: " << Stedac::getKredit()
		<< "\tKamata: " << Stedac::getKamata();

	delete p1;  
	p1 = 0;
	delete p2;  
	p2 = 0;
	delete p3;  
	p3 = 0;
	delete p4;  
	p4 = 0;

	cout << "\nBroj na stedaci po brishenje e "
		<< Covek::getbrojStedaci() << endl;

	return 0;
}
