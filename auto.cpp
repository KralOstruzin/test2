#include <iostream>
#include <string>
#include "vozidlo.h"
#include "auto.h"

Auto::Auto(trasa typTrasy, std::string nazev, int pocetCestujicich, double porizovaciCena, double objem, double spotreba): Vozidlo(typTrasy, nazev, pocetCestujicich, porizovaciCena), m_objem(objem), m_spotreba(spotreba)
{

}

double Auto::objem() const
{
    return m_objem;
}

void Auto::setObjem(double newObjem)
{
    m_objem = newObjem;
}

double Auto::spotreba() const
{
    return m_spotreba;
}

void Auto::setSpotreba(double newSpotreba)
{
    m_spotreba = newSpotreba;
}

void Auto::printInfo()
{
    Vozidlo::printInfo(); // Call the base class
    std::cout << "Objem: " << m_objem << ", spotreba: " << m_spotreba << "\n" << std::endl;
}

double Auto::getRemainingDistance()
{
    // spotřeba / 100km
    // např. 8l / 100km
    // v nádrži 32l -> 400km

    double distance = (m_objem / m_spotreba) * 100;

    return distance;
}
