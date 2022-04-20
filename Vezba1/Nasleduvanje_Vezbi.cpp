#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#pragma warning(disable : 4996);

class vraboten
{
public:
	void postaviVraboten(const char*,const char*,unsigned);
	void prikazi_podatoci() ;
private:
	char *ime, *prezime;
	unsigned int godinaVrabotuvanje;
};

void vraboten::postaviVraboten(const char* a,const char* b, unsigned c)
{
	ime = new char[strlen(a) + 1];
	strcpy(ime, a);
	prezime = new char[strlen(b) + 1];
	strcpy(prezime, b);
	godinaVrabotuvanje = c;
}

void vraboten::prikazi_podatoci()
{
	cout << "Ime: " << ime << endl;
	cout << "Prezime: " << prezime << endl;
	cout << "Godina na vrabotuvanje: " << godinaVrabotuvanje << endl;
}

class profesor:protected vraboten
{
public:
	void postaviProfesor(const char*,const char*,unsigned,const char*,const char*,int);
	void prikaziProfesor();
private:
	char *zvanje, *oblast;
	int broj_predmeti;
};

void profesor::postaviProfesor(const char* a,const char* b, unsigned c,const char* d,const char* e, int f)
{
	postaviVraboten(a, b, c);
	zvanje = new char(strlen(d) + 1);
	strcpy(zvanje, d);
	oblast = new char(strlen(e) + 1);
	strcpy(oblast, e);
	broj_predmeti = f;
}
void profesor::prikaziProfesor()
{
	prikazi_podatoci();
	cout << "Zvanje: " << zvanje << endl;
	cout << "Oblast: " << oblast << endl;
	cout << "Broj na predmeti: " << broj_predmeti << endl;
	cout << "\n";
}


class asistent :protected vraboten
{
public:
	void postaviAsistent(const char*,const char*,unsigned,const char*,const char*,int);
	void prikaziAsistent();
private:
	char *zvanje, *mentor;
	int broj_predmeti;
};

void asistent::postaviAsistent(const char* a,const char* b, unsigned c,const char* d,const char* e, int f)
{
	postaviVraboten(a,b,c);
	zvanje = new char(strlen(d) + 1);
	strcpy(zvanje, d);
	mentor = new char(strlen(e) + 1);
	strcpy(mentor, e);
	broj_predmeti = f;
}

void asistent::prikaziAsistent()
{
	prikazi_podatoci();
	cout << "Zvanje: " << zvanje << endl;
	cout << "Mentor: " << mentor << endl;
	cout << "Broj na predmeti: " << broj_predmeti << endl;
	cout << "\n";

}

class demonstrator:protected vraboten
{
public:
	void postaviDemonstrator(const char*, const char*, unsigned, const char*);
	void prikaziDemonstrator();
private:
	char *rabotno_vreme;
};

void demonstrator::postaviDemonstrator(const char* a,const char* b, unsigned c, const char* d)
{
	postaviVraboten(a, b, c);
	rabotno_vreme = new char(strlen(d) + 1);
	strcpy(rabotno_vreme, d);
}

void demonstrator::prikaziDemonstrator()
{
	prikazi_podatoci();
	cout << "Rabotno vreme: " << rabotno_vreme << endl;
	cout << "\n";
}

int main()
{
	profesor p1;
	asistent p2;
	demonstrator p3;
	p1.postaviProfesor("Darko", "Petkov", 1998, "Doktor", "Elektronika", 6);
	p1.prikaziProfesor();
	p2.postaviAsistent("Vance", "Todorov", 2016, "Magister", "Milan Mitrev", 6);
	p2.prikaziAsistent();
	p3.postaviDemonstrator("Trajce", "Dimitrov", 2020, "09:00 - 14:00");
	p3.prikaziDemonstrator();
	return 0;
}