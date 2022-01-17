#include "vozidlo.h"
#include <iostream>
#include <string>

Vozidlo:: Vozidlo(Vozidlo::trasa typTrasy, std::string nazev, int pocetCestujicich, double porizovaciCena): m_typTrasy(typTrasy), m_nazev(nazev), m_pocetCestujicich(pocetCestujicich), m_porizovaciCena(porizovaciCena)
{

}

Vozidlo::Vozidlo(std::string nazev, double porizovaciCena): m_nazev(nazev), m_porizovaciCena(porizovaciCena), m_typTrasy(Vozidlo::kratke), m_pocetCestujicich(1)
{

}

Vozidlo::trasa Vozidlo::typTrasy() const
{
    return m_typTrasy;
}

void Vozidlo::setTypTrasy(trasa newTypTrasy)
{
    m_typTrasy = newTypTrasy;
}

const std::string &Vozidlo::nazev() const
{
    return m_nazev;
}

void Vozidlo::setNazev(const std::string &newNazev)
{
    m_nazev = newNazev;
}

int Vozidlo::pocetCestujicich() const
{
    return m_pocetCestujicich;
}

void Vozidlo::setPocetCestujicich(int newPocetCestujicich)
{
    m_pocetCestujicich = newPocetCestujicich;
}

double Vozidlo::porizovaciCena() const
{
    return m_porizovaciCena;
}

void Vozidlo::setPorizovaciCena(double newPorizovaciCena)
{
    m_porizovaciCena = newPorizovaciCena;
}

void Vozidlo::printInfo()
{
    std::cout << "Typ: " << Vozidlo::m_typTrasy << ", nazev: " << m_nazev << ", pocet cestujicich: " << m_pocetCestujicich << ", cena: " << m_porizovaciCena << std::endl;
}

double Vozidlo::operator+(Vozidlo &v1) {
    return v1.getRemainingDistance() + this->getRemainingDistance();
}


