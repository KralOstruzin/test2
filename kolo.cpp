#include <iostream>
#include <string>
#include "vozidlo.h"
#include "kolo.h"

Kolo::Kolo( std::string nazev, double porizovaciCena, bool crosove, double zbyvajiciKm): Vozidlo(nazev, porizovaciCena), m_crosove(crosove), m_zbyvajiciKm(zbyvajiciKm)
{

}

bool Kolo::crosove() const
{
    return m_crosove;
}

void Kolo::setCrosove(bool newCrosove)
{
    m_crosove = newCrosove;
}

double Kolo::zbyvajiciKm() const
{
    return m_zbyvajiciKm;
}

void Kolo::setZbyvajiciKm(double newZbyvajiciKm)
{
    m_zbyvajiciKm = newZbyvajiciKm;
}

void Kolo::printInfo()
{
    Vozidlo::printInfo(); // Call the base class
    std::cout << "Je kolo crosove?: " << m_crosove << ", zbyvajici km: " << m_zbyvajiciKm << "\n" << std::endl;
}

double Kolo::getRemainingDistance()
{
    return m_zbyvajiciKm;
}
